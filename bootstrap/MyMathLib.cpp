#include "MyMathLib.h"

Vector2 Vector2::Add(Vector2& B)
{
	// a vector2 instance's coordinate values are  added to another vector2's coordinate values 
	Vector2 newVec = Vector2(m_x + B.m_x, m_y + B.m_y);
	// a new vector is created that is the sum of the two vectors
	return newVec;
}

Vector2 Vector2::operator+(Vector2& B)
{
	return Add(B);
}

Vector2 Vector2::Subtract(Vector2 B)
{
	// a vector2 instance's coordinate values are subtracted from another vector2's coordinate values
	Vector2 newVec = Vector2(m_x - B.m_x, m_y - B.m_y);
	// a new vector is created that is the difference of the two vectors
	return newVec;
}

Vector2 Vector2::operator-(Vector2 B)
{
	return Subtract(B);
}

Vector2 Vector2::ScalerMult(float k)
{
	// a scaling value is multiplied by a vector2 instance to upscale or downscale it
	Vector2 newVec = Vector2(m_x * k, m_y * k);
	// a new vector is created to represent the new scaled vector
	return newVec;
}

Vector2 Vector2::operator*(float k)
{
	return ScalerMult(k);
}

float Vector2::Magnitude()
{
	// presents the magnitude of a vector2 instance
	float result = sqrt((m_x * m_x) + (m_y * m_y));
	return result;
}

Vector2 Vector2::Normalize()
{
	// alternate
	/*float x = sqrt(m_x + m_y);
	float A = x;
	float B = x;
	A = A * (m_x / A);
	B = B * (m_y / B);
	m_x = B;
	m_y = A;*/

	// changes the vector into a unit vector by dividing
	Vector2 newVec = Vector2(m_x / Magnitude(), m_y / Magnitude());
	return newVec;
}

float Vector2::DotProduct(Vector2 B)
{
	// takes coordinate vectors 
	return (m_x*B.m_x) + (m_y * B.m_y);
}
bool Vector2::operator==(Vector2 & result)
{
	// overloads == operator ro accept Vectors equal to Vectors
	return m_x == result.m_x && m_y == result.m_y;
}

float Vector2::operator=(float & A)
{
	return m_x = A; m_y = A;
}

Vector3 Vector3::Add(Vector3 B)
{
	// a vector3 instance's coordinate values are  added to another vector3's coordinate values 
	Vector3 newVec = Vector3(m_x + B.m_x, m_y + B.m_y, m_z + B.m_z);
	// a new vector is created that is the sum of the two vectors
	return newVec;
}

Vector3 Vector3::operator+(Vector3 B)
{
	return Add(B);
}

Vector3 Vector3::Subtract(Vector3 B)
{
	// a vector2 instance's coordinate values are subtracted from another vector2's coordinate values
	Vector3 newVec = Vector3(m_x - B.m_x, m_y - B.m_y, m_z - B.m_z);
	// a new vector is created that is the difference of the two vectors
	return newVec;
}

Vector3 Vector3::operator-(Vector3 B)
{
	return Subtract(B);
}

Vector3 Vector3::ScalerMult(float k)
{
	// a scaling value is multiplied by a vector2 instance to upscale or downscale it
	Vector3 newVec = Vector3(m_x * k, m_y * k, m_z * k);

	return newVec;
}

Vector3 Vector3::operator*(float k)
{
	return ScalerMult(k);
}

float Vector3::Magnitude()
{
	// presents the magnitude of a vector3 instance
	float result = sqrt((m_x * m_x) + (m_y * m_y) + (m_z * m_z));
	return result;
}

Vector3 Vector3::Normalize()
{
	// changes the vector into a unit vector by dividing
	Vector3 newVec = Vector3(m_x / Magnitude(), m_y / Magnitude(), m_z / Magnitude());
	return newVec;
}

float Vector3::DotProduct(Vector3 B)
{
	// takes coordinate vectors multiplies them and returns a single number
	return (m_x*B.m_x) + (m_y * B.m_y) + (m_z * B.m_z);
}

Vector3 Vector3::CrossProduct(Vector3 B)
{
	//x = (AyBz) - (AzBy); y = (AzBx) - (AxBz); z = (AxBy) - (AyBx)
	Vector3 newVec = Vector3((m_y * B.m_z) - (m_z * B.m_y), (m_z * B.m_x) - (m_x * B.m_z), (m_x * B.m_y) - (m_y * B.m_x));
	return newVec;
}

bool Vector3::operator==(Vector3 & result)
{
	// overloads == operator ro accept Vectors equal to Vectors
	return m_x == result.m_x && m_y == result.m_y && m_z == result.m_z;
}

float Vector3::operator=(float & A)
{
	return m_x = A; m_y = A; m_z = A;
}

Vector4 Vector4::Add(Vector4 B)
{
	// a vector4 instance's coordinate values are  added to another vector4's coordinate values 
	Vector4 newVec = Vector4(m_x + B.m_x, m_y + B.m_y, m_z + B.m_z, m_w + B.m_w);
	// a new vector is created that is the sum of the two vectors
	return newVec;
}

Vector4 Vector4::operator+(Vector4 B)
{
	return Add(B);
}

Vector4 Vector4::Subtract(Vector4 B)
{
	// a vector2 instance's coordinate values are subtracted from another vector2's coordinate values
	Vector4 newVec = Vector4(m_x - B.m_x, m_y - B.m_y, m_z - B.m_z, m_w - B.m_w);
	// a new vector is created that is the difference of the two vectors
	return newVec;
}

Vector4 Vector4::operator-(Vector4 B)
{
	return Subtract(B);
}

Vector4 Vector4::ScalerMult(float k)
{
	// a scaling value is multiplied by a vector2 instance to upscale or downscale it
	Vector4 newVec = Vector4(m_x * k, m_y * k, m_z * k, m_w * k);
	// a new vector is created to represent the new scaled vector
	return newVec;
}

Vector4 Vector4::operator*(float k)
{
	return ScalerMult(k);
}

float Vector4::Magnitude()
{
	// presents the magnitude of a vector4 instance
	float result = sqrt((m_x * m_x) + (m_y * m_y) + (m_z * m_z) + (m_w * m_w));
	return result;
}

Vector4 Vector4::Normalize()
{
	// changes the vector into a unit vector by dividing
	Vector4 newVec = Vector4(m_x / Magnitude(), m_y / Magnitude(), m_z / Magnitude(), m_w / Magnitude());
	return newVec;
}

float Vector4::DotProduct(Vector4 B)
{
	// takes coordinate vectors multiplies them and returns a single number
	return (m_x*B.m_x) + (m_y * B.m_y) + (m_z * B.m_z);
}

bool Vector4::operator==(Vector4 & result)
{
	// overloads == operator ro accept Vectors equal to Vectors
	return m_x == result.m_x && m_y == result.m_y;
}

float Vector4::operator=(float & A)
{
	return m_w = A; m_x = A; m_y = A; m_z = A;
}

Matrix2x2::Matrix2x2(float x1, float x2, float y1, float y2)
{
	/*	 ___________________________________________
		|											|
		|	MatShape[0] = x1	MatShape[1] = x2	|
		|	MatShape[2] = y1 	MatShape[3] = y2	|
		|___________________________________________| */

	m_Matrix[0] = x1;
	m_Matrix[1] = x2;
	m_Matrix[2] = y1;
	m_Matrix[3] = y2;

	// matrix2v2 that is made up of 4 float arguments
}

Matrix2x2::Matrix2x2(Vector2 columnA, Vector2 columnB)
{
	m_Matrix[0] = columnA.m_x;
	m_Matrix[1] = columnB.m_x;
	m_Matrix[2] = columnA.m_y;
	m_Matrix[3] = columnB.m_y;

	// Matrix2x2 that is made up of 2 Vector arguments
}

Matrix2x2 Matrix2x2::operator*(Matrix2x2 k)
{
	// overloads the * operator be able to multiply 2x2 matrices
	return Mult(k);
}

Matrix2x2 Matrix2x2::Mult(Matrix2x2 k)
{
	// allows you to multiply 2x2 Matrices
	Matrix2x2 newMat = Matrix2x2((m_Matrix[0] * k.m_Matrix[0]) + (m_Matrix[1] * k.m_Matrix[2]),
		(m_Matrix[0] * k.m_Matrix[1]) + (m_Matrix[1] * k.m_Matrix[3]),
		(m_Matrix[2] * k.m_Matrix[0]) + (m_Matrix[3] * k.m_Matrix[2]),
		(m_Matrix[2] * k.m_Matrix[1]) + (m_Matrix[3] * k.m_Matrix[3]));
	return newMat;
}

Vector2 Matrix2x2::operator*(Vector2 k)
{
	// overloads the * operator be able to multiply 2x2 matrices by Vector2s and returns a Vector
	return Mult(k);
}

Vector2 Matrix2x2::Mult(Vector2 k)
{
	// allows you to multply a Matrix 2x2 by a Vector2
	Vector2 resultVec = Vector2(
		(k.m_x * m_Matrix[0]) + (k.m_x * m_Matrix[1]),
		(k.m_y * m_Matrix[2]) + (k.m_y * m_Matrix[3]));
	return resultVec;
}

bool Matrix2x2::operator==(Matrix2x2 & result)
{
	// overloads == operator to know to tell if matrices are equal

	return m_Matrix[0] == result.m_Matrix[0] && m_Matrix[1] == result.m_Matrix[1] && m_Matrix[2] == result.m_Matrix[2] && m_Matrix[3] == result.m_Matrix[3];
}


ofstream & operator<<(ofstream & output, Matrix2x2 & n)
{
	// this overloaded operator allows me to be able to print a Matrix to a file
	output << "X {" << setDecLimit(n.m_Matrix[0], 3u) << ", " << setDecLimit(n.m_Matrix[1], 3u) <<"}\n";
	output << "Y {" << setDecLimit(n.m_Matrix[2], 3u) << ", " << setDecLimit(n.m_Matrix[3], 3u) <<"}\n";

	return output;
}

ofstream & operator<<(ofstream & output, Matrix3x3 & n)
{
	// this overloaded operator allows me to be able to print a Matrix to a file
	output << "X {" << setDecLimit(n.m_Matrix[0], 3u) << ", " << setDecLimit(n.m_Matrix[1], 3u) << ", " << setDecLimit(n.m_Matrix[2], 3u) << "}\n";
	output << "Y {" << setDecLimit(n.m_Matrix[3], 3u) << ", " << setDecLimit(n.m_Matrix[4], 3u) << ", " << setDecLimit(n.m_Matrix[5], 3u) << "}\n";
	output << "Z {" << setDecLimit(n.m_Matrix[6], 3u) << ", " << setDecLimit(n.m_Matrix[7], 3u) << ", " << setDecLimit(n.m_Matrix[8], 3u) << "}\n";

	return output;
}

ofstream & operator<<(ofstream & output, Matrix4x4 & n)
{
	// this overloaded operator allows me to be able to print a Matrix to a file
	output << "X {" << setDecLimit(n.m_Matrix[0], 3u) << ", " << setDecLimit(n.m_Matrix[1], 3u) << ", " << setDecLimit(n.m_Matrix[2], 3u) << ", " << setDecLimit(n.m_Matrix[3], 3u) << "}\n";
	output << "Y {" << setDecLimit(n.m_Matrix[4], 3u) << ", " << setDecLimit(n.m_Matrix[5], 3u) << ", " << setDecLimit(n.m_Matrix[6], 3u) << ", " << setDecLimit(n.m_Matrix[7], 3u) << "}\n";
	output << "Z {" << setDecLimit(n.m_Matrix[8], 3u) << ", " << setDecLimit(n.m_Matrix[9], 3u) << ", " << setDecLimit(n.m_Matrix[10], 3u) << ", " << setDecLimit(n.m_Matrix[11], 3u) << "}\n";
	output << "W {" << setDecLimit(n.m_Matrix[12], 3u) << ", "<< setDecLimit(n.m_Matrix[13], 3u) << ", " << setDecLimit(n.m_Matrix[14], 3u) << ", " << setDecLimit(n.m_Matrix[15], 3u) << "}\n";

	return output;
}

Matrix3x3::Matrix3x3(float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3)
{
	// Matrix3x3 made of 9 float arguments
	m_Matrix[0] = x1; m_Matrix[1] = x2; m_Matrix[2] = x3;
	m_Matrix[3] = y1; m_Matrix[4] = y2; m_Matrix[5] = y3;
	m_Matrix[6] = z1; m_Matrix[7] = z2; m_Matrix[8] = z3;
}

Matrix3x3::Matrix3x3(Vector3 columnA, Vector3 columnB, Vector3 columnC)
{
	// Matrix3x3 made up of 3 Vector3 arguments
	m_Matrix[0] = columnA.m_x; m_Matrix[1] = columnB.m_x; m_Matrix[2] = columnC.m_x;
	m_Matrix[3] = columnA.m_y; m_Matrix[4] = columnB.m_y; m_Matrix[5] = columnC.m_y;
	m_Matrix[6] = columnA.m_z; m_Matrix[7] = columnB.m_z; m_Matrix[8] = columnC.m_z;
}

Matrix3x3 Matrix3x3::operator*(Matrix3x3 k)
{
	// overloads the * operator be able to multiply 3x3 matrices
	return Mult(k);
}

Matrix3x3 Matrix3x3::Mult(Matrix3x3 k)
{
	// allows you to multply 2 3x3 Matrices
	Matrix3x3 newMat = Matrix3x3(
		/*x1*/	(m_Matrix[0] * k.m_Matrix[0]) + (m_Matrix[1] * k.m_Matrix[3]) + (m_Matrix[2] * k.m_Matrix[6]),
		/*x2*/	(m_Matrix[0] * k.m_Matrix[1]) + (m_Matrix[1] * k.m_Matrix[4]) + (m_Matrix[2] * k.m_Matrix[7]),
		/*x3*/	(m_Matrix[0] * k.m_Matrix[2]) + (m_Matrix[1] * k.m_Matrix[5]) + (m_Matrix[2] * k.m_Matrix[8]),
		/*y1*/	(m_Matrix[3] * k.m_Matrix[0]) + (m_Matrix[4] * k.m_Matrix[3]) + (m_Matrix[5] * k.m_Matrix[6]),
		/*y2*/	(m_Matrix[3] * k.m_Matrix[1]) + (m_Matrix[4] * k.m_Matrix[4]) + (m_Matrix[5] * k.m_Matrix[7]),
		/*y3*/	(m_Matrix[3] * k.m_Matrix[2]) + (m_Matrix[4] * k.m_Matrix[5]) + (m_Matrix[5] * k.m_Matrix[8]),
		/*z1*/	(m_Matrix[6] * k.m_Matrix[0]) + (m_Matrix[7] * k.m_Matrix[3]) + (m_Matrix[8] * k.m_Matrix[6]),
		/*z2*/	(m_Matrix[6] * k.m_Matrix[1]) + (m_Matrix[7] * k.m_Matrix[4]) + (m_Matrix[8] * k.m_Matrix[7]),
		/*z3*/	(m_Matrix[6] * k.m_Matrix[2]) + (m_Matrix[7] * k.m_Matrix[5]) + (m_Matrix[8] * k.m_Matrix[8]));
	return newMat;
}

Vector3 Matrix3x3::operator*(Vector3 k)
{
	// overloads the * operator be able to multiply 3x3 matrices by Vector3s
	return Mult(k);
}

Vector3 Matrix3x3::Mult(Vector3 k)
{
	// this function allows you to multiply a Matrix3x3 by Vector3s 
	Vector3 newVec = Vector3(
		/*x*/	(k.m_x * m_Matrix[0]) + (k.m_x * m_Matrix[1]) + (k.m_x * m_Matrix[2]),
		/*y*/	(k.m_y * m_Matrix[3]) + (k.m_y * m_Matrix[4]) + (k.m_y * m_Matrix[5]),
		/*z*/	(k.m_z * m_Matrix[6]) + (k.m_z * m_Matrix[7]) + (k.m_z * m_Matrix[8]));
	return newVec;
}

bool Matrix3x3::operator==(Matrix3x3 & result)
{
	// overloads == operator to know to tell if matrices are equal
	return m_Matrix[0] == result.m_Matrix[0] && m_Matrix[1] == result.m_Matrix[1] && m_Matrix[2] == result.m_Matrix[2] && m_Matrix[3] == result.m_Matrix[3];
}

Matrix3x3 Matrix3x3::RotateX(float d)
{
	// rotates a matrix on the X axis by the "degrees" given as an argument
	Matrix3x3 newMat = Matrix3x3(
		m_Matrix[0], m_Matrix[1], m_Matrix[2],
		m_Matrix[3], cos(d), -sin(d),
		m_Matrix[6], sin(d), cos(d));
	*this = *this * newMat; // multiplys the rotated matrix by the actual matrix3x3 instance and returns it
	return *this;

}

Matrix3x3 Matrix3x3::RotateY(float d)
{
	// rotates a matrix on the Y axis by the "degrees" given as an argument
	Matrix3x3 newMat = Matrix3x3(
		cos(d), m_Matrix[1], sin(d),
		m_Matrix[3], m_Matrix[4], m_Matrix[5],
		-sin(d), m_Matrix[7], cos(d));
	 *this = *this * newMat; // multiplys the rotated matrix by the actual matrix3x3 instance and returns it
	return *this;
}

Matrix3x3 Matrix3x3::RotateZ(float d)
{
	// rotates a matrix on the X axis by the "degrees" given as an argument
	Matrix3x3 newMat = Matrix3x3(
		cos(d), -sin(d), m_Matrix[2],
		sin(d), cos(d), m_Matrix[5],
		m_Matrix[6], m_Matrix[7], m_Matrix[8]);
	*this = *this * newMat; // multiplys the rotated matrix by the actual matrix3x3 instance and returns it
	return *this;

}

Matrix4x4::Matrix4x4(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4, float z1, float z2, float z3, float z4, float w1, float w2, float w3, float w4)
{
	// Matrix4x4 made up of 16 floats
	m_Matrix[0] = x1; m_Matrix[1] = x2; m_Matrix[2] = x3; m_Matrix[3] = x4;
	m_Matrix[4] = y1; m_Matrix[5] = y2; m_Matrix[6] = y3; m_Matrix[7] = x4;
	m_Matrix[8] = z1; m_Matrix[9] = z2; m_Matrix[10] = z3; m_Matrix[11] = z4;
	m_Matrix[12] = w1; m_Matrix[13] = w2; m_Matrix[14] = w3; m_Matrix[15] = w4;
}

Matrix4x4::Matrix4x4(Vector4 columnA, Vector4 columnB, Vector4 columnC, Vector4 columnD)
{
	// Matrix4x4 made up of 4 Vector4 arguments
	m_Matrix[0] = columnA.m_x; m_Matrix[1] = columnB.m_x; m_Matrix[2] = columnC.m_x; m_Matrix[3] = columnD.m_x;
	m_Matrix[4] = columnA.m_y; m_Matrix[5] = columnB.m_y; m_Matrix[6] = columnC.m_y; m_Matrix[7] = columnD.m_y;
	m_Matrix[8] = columnA.m_z; m_Matrix[9] = columnB.m_z; m_Matrix[10] = columnC.m_z; m_Matrix[11] = columnD.m_z;
	m_Matrix[12] = columnA.m_w; m_Matrix[13] = columnB.m_w; m_Matrix[14] = columnC.m_w; m_Matrix[15] = columnD.m_w;
}

Matrix4x4 Matrix4x4::operator*(Matrix4x4 k)
{
	// overloads the * operator be able to multiply 3x3 matrices
	return Mult(k);
}

Matrix4x4 Matrix4x4::Mult(Matrix4x4 k)
{
	// allows you to multiply 4x4 matrices
	Matrix4x4 newMat = Matrix4x4(
		/*x1*/	(m_Matrix[0] * k.m_Matrix[0]) + (m_Matrix[1] * k.m_Matrix[4]) + (m_Matrix[2] * k.m_Matrix[8]) + (m_Matrix[3] * k.m_Matrix[12]),
		/*x2*/	(m_Matrix[0] * k.m_Matrix[1]) + (m_Matrix[1] * k.m_Matrix[5]) + (m_Matrix[2] * k.m_Matrix[9]) + (m_Matrix[3] * k.m_Matrix[13]),
		/*x3*/	(m_Matrix[0] * k.m_Matrix[2]) + (m_Matrix[1] * k.m_Matrix[6]) + (m_Matrix[2] * k.m_Matrix[10]) + (m_Matrix[3] * k.m_Matrix[14]),
		/*x4*/	(m_Matrix[0] * k.m_Matrix[3]) + (m_Matrix[1] * k.m_Matrix[7]) + (m_Matrix[2] * k.m_Matrix[11]) + (m_Matrix[3] * k.m_Matrix[15]),
		/*y1*/	(m_Matrix[4] * k.m_Matrix[0]) + (m_Matrix[5] * k.m_Matrix[4]) + (m_Matrix[6] * k.m_Matrix[8]) + (m_Matrix[7] * k.m_Matrix[12]),
		/*y2*/	(m_Matrix[4] * k.m_Matrix[1]) + (m_Matrix[5] * k.m_Matrix[5]) + (m_Matrix[6] * k.m_Matrix[9]) + (m_Matrix[7] * k.m_Matrix[13]),
		/*y3*/	(m_Matrix[4] * k.m_Matrix[2]) + (m_Matrix[5] * k.m_Matrix[6]) + (m_Matrix[6] * k.m_Matrix[10]) + (m_Matrix[7] * k.m_Matrix[14]),
		/*y4*/	(m_Matrix[4] * k.m_Matrix[3]) + (m_Matrix[5] * k.m_Matrix[7]) + (m_Matrix[6] * k.m_Matrix[11]) + (m_Matrix[7] * k.m_Matrix[15]),
		/*z1*/	(m_Matrix[8] * k.m_Matrix[0]) + (m_Matrix[9] * k.m_Matrix[4]) + (m_Matrix[10] * k.m_Matrix[8]) + (m_Matrix[11] * k.m_Matrix[12]),
		/*z2*/	(m_Matrix[8] * k.m_Matrix[1]) + (m_Matrix[9] * k.m_Matrix[5]) + (m_Matrix[10] * k.m_Matrix[9]) + (m_Matrix[11] * k.m_Matrix[13]),
		/*z3*/	(m_Matrix[8] * k.m_Matrix[2]) + (m_Matrix[9] * k.m_Matrix[6]) + (m_Matrix[10] * k.m_Matrix[10]) + (m_Matrix[11] * k.m_Matrix[14]),
		/*z4*/	(m_Matrix[8] * k.m_Matrix[3]) + (m_Matrix[9] * k.m_Matrix[7]) + (m_Matrix[10] * k.m_Matrix[11]) + (m_Matrix[11] * k.m_Matrix[15]),
		/*w1*/	(m_Matrix[12] * k.m_Matrix[0]) + (m_Matrix[13] * k.m_Matrix[4]) + (m_Matrix[14] * k.m_Matrix[8]) + (m_Matrix[15] * k.m_Matrix[12]),
		/*w2*/	(m_Matrix[12] * k.m_Matrix[1]) + (m_Matrix[13] * k.m_Matrix[5]) + (m_Matrix[14] * k.m_Matrix[9]) + (m_Matrix[15] * k.m_Matrix[13]),
		/*w3*/	(m_Matrix[12] * k.m_Matrix[2]) + (m_Matrix[13] * k.m_Matrix[6]) + (m_Matrix[14] * k.m_Matrix[10]) + (m_Matrix[15] * k.m_Matrix[14]),
		/*w4*/	(m_Matrix[12] * k.m_Matrix[3]) + (m_Matrix[13] * k.m_Matrix[7]) + (m_Matrix[14] * k.m_Matrix[11]) + (m_Matrix[15] * k.m_Matrix[15]));
	return newMat;
}

Vector4 Matrix4x4::operator*(Vector4 k)
{
	// overloads the * operator be able to multiply 4x4 matrices by Vector4s
	return Mult(k);
}

Vector4 Matrix4x4::Mult(Vector4 k)
{
	// overloads the * operator be able to multiply 4x4 matrices by Vector4s
	Vector4 newVec = Vector4(
		/*x*/(k.m_x * m_Matrix[0]) + (k.m_x * m_Matrix[1]) + (k.m_x * m_Matrix[2]) + (k.m_x * m_Matrix[3]),
		/*y*/(k.m_y * m_Matrix[4]) + (k.m_y * m_Matrix[5]) + (k.m_y * m_Matrix[6]) + (k.m_y * m_Matrix[7]),
		/*z*/(k.m_y * m_Matrix[8]) + (k.m_z * m_Matrix[9]) + (k.m_z * m_Matrix[10]) + (k.m_z * m_Matrix[11]),
		/*w*/(k.m_w * m_Matrix[12]) + (k.m_w * m_Matrix[13]) + (k.m_w * m_Matrix[14]) + (k.m_w * m_Matrix[15]));
	return newVec;
}

bool Matrix4x4::operator==(Matrix4x4 & result)
{
	// overloads == operator to know to tell if matrices are equal
	return  m_Matrix[0] == result.m_Matrix[0] && m_Matrix[1] == result.m_Matrix[1] && m_Matrix[2] == result.m_Matrix[2] && m_Matrix[3] == result.m_Matrix[3];
}

Matrix4x4 Matrix4x4::RotateX(float d)
{
	// rotates a matrix on the X axis by the "degrees" given as an argument
	Matrix4x4 newMat = Matrix4x4(
		m_Matrix[0], m_Matrix[1], m_Matrix[2], m_Matrix[3],
		m_Matrix[4], cos(d), -sin(d), m_Matrix[7],
		m_Matrix[8], sin(d), cos(d), m_Matrix[11],
		m_Matrix[12], m_Matrix[13], m_Matrix[14], m_Matrix[15]);
	*this = *this * newMat; // multiplys the rotated matrix by the actual matrix4x4 instance and returns it
	return *this;
}

Matrix4x4 Matrix4x4::RotateY(float d)
{
	// rotates a matrix on the Y axis by the "degrees" given as an argument
	Matrix4x4 newMat = Matrix4x4(
		cos(d), m_Matrix[1], sin(d), m_Matrix[3],
		m_Matrix[4], m_Matrix[5], m_Matrix[6], m_Matrix[7],
		-sin(d), m_Matrix[9], cos(d), m_Matrix[11],
		m_Matrix[12], m_Matrix[13], m_Matrix[14], m_Matrix[15]);
	*this = *this * newMat; // multiplys the rotated matrix by the actual matrix4x4 instance and returns it
	return *this;

}

Matrix4x4 Matrix4x4::RotateZ(float d)
{
	// rotates a matrix on the Z axis by the "degrees" given as an argument
	Matrix4x4 newMat = Matrix4x4(
		cos(d), -sin(d), m_Matrix[2], m_Matrix[3],
		sin(d), cos(d), m_Matrix[6], m_Matrix[7],
		m_Matrix[8], m_Matrix[9], m_Matrix[10], m_Matrix[11],
		m_Matrix[12], m_Matrix[13], m_Matrix[14], m_Matrix[15]);
	*this = *this * newMat; // multiplys the rotated matrix by the actual matrix4x4 instance and returns it
	return *this;
}


float setDecLimit(float value, unsigned int decimals = 0)
{
	// function that sets a decimal limit used to set a fixed limit when printing 
	float power = powf(10.0f, (float)decimals);
	float setDecLimitedValue = truncf(value * power) / power;
	if (setDecLimitedValue == -0)
		setDecLimitedValue = 0;

	return setDecLimitedValue;
}