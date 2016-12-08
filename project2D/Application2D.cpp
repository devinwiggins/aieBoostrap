#include "Application2D.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include "MyMath.h"
#include <fstream>

Application2D::Application2D() {

}

Application2D::~Application2D() {

}

bool Application2D::startup() {
	
	m_2dRenderer = new aie::Renderer2D();

	m_texture = new aie::Texture("./textures/numbered_grid.tga");
	m_shipTexture = new aie::Texture("./textures/ship.png");
	m_AsteroidTextureSmall = new aie::Texture("./textures/rock_small.png");
	m_AsteroidTextureMedium = new aie::Texture("./textures/rock_medium.png");
	m_AsteroidTextureLarge = new aie::Texture("./textures/rock_large.png");
	m_font = new aie::Font("./font/consolas.ttf", 32);

	m_audio = new aie::Audio("./audio/powerup.wav");

	m_player = new Player();

	m_cameraX = 0;
	m_cameraY = 0;
	m_timer = 0;
	m_rotDegrees = m_timer * (pi/180) * 180;
	//LoadGameState();
	return true;
	
}

void Application2D::shutdown() {
	//SaveGameState();
	delete m_audio;
	delete m_font;
	delete m_texture;
	delete m_shipTexture;
	delete m_AsteroidTextureSmall;
	delete m_AsteroidTextureMedium;
	delete m_AsteroidTextureLarge;
	delete m_2dRenderer;
	
}


void Application2D::update(float deltaTime) {

	m_timer += deltaTime;
	// input example
	aie::Input* input = aie::Input::getInstance();
	
	// use arrow keys to move camera
	if (input->isKeyDown(aie::INPUT_KEY_UP))
	{
		m_player->m_position.m_y += 500 * deltaTime;
		//m_cameraY += 500.0f * deltaTime;
	}
	if (input->isKeyDown(aie::INPUT_KEY_DOWN))
	{
		m_player->m_position.m_y -= 500 * deltaTime;
		//m_cameraY -= 500.0f * deltaTime;
	}

	if (input->isKeyDown(aie::INPUT_KEY_LEFT))  
	{
		m_player->m_position.m_x -= 500 * deltaTime;
		//m_cameraX -= 500.0f * deltaTime;
	}

	if (input->isKeyDown(aie::INPUT_KEY_RIGHT))
	{
		m_player->m_position.m_x += 500 * deltaTime;
		//m_cameraX += 500.0f * deltaTime;
	}
	// example of audio
	if (input->wasKeyPressed(aie::INPUT_KEY_SPACE))
	{
		m_2dRenderer->drawLine(m_player->m_position.m_x, m_player->m_position.m_y + 500, m_player->m_position.m_x, m_player->m_position.m_y, 2, 1);
		m_audio->play();
	}

	// exit the application
	if (input->isKeyDown(aie::INPUT_KEY_ESCAPE))
	{
		quit();
	}
}

void Application2D::draw() {
	
	// wipe the screen to the background colour
	clearScreen();

	aie::Input* input = aie::Input::getInstance();
	// set the camera position before we begin rendering
	m_2dRenderer->setCameraPos(m_cameraX, m_cameraY);
	
	// begin drawing sprites
	m_2dRenderer->begin();

	// demonstrate animation
	m_2dRenderer->setUVRect(int(m_timer) % 8 / 8.0f, 0, 1.f / 8, 1.f / 8);
    m_2dRenderer->drawSprite(m_texture, 200, 200, 100, 100);

	// demonstrate spinning sprite
	m_2dRenderer->setUVRect(0, 0, 1, 1);
	m_2dRenderer->drawSprite(m_shipTexture, m_player->m_position.m_x, m_player->m_position.m_y, 0, 0, 0 , 1);

	m_2dRenderer->setUVRect(0, 0, 1, 1);
	m_2dRenderer->drawSprite(m_shipTexture, m_player->m_position.m_x, m_player->m_position.m_y, 0, 0, 0, 1);

	// draw a thin line
	m_2dRenderer->drawLine(m_player->m_position.m_x, m_player->m_position.m_y, m_player->m_position.m_x, m_player->m_position.m_y, 2, 1);
	
	// draw a moving purple circle
	//m_2dRenderer->setRenderColour(1, 0, 1, 1);
	//m_2dRenderer->drawCircle(cos(m_rotDegrees) + 600, sin(a), 1);

	// draw a rotating red box
	//m_2dRenderer->setRenderColour(1, 0, 0, 1);
	//m_2dRenderer->drawBox(0, 720, 60, 70, 0);
	

	// draw a slightly rotated sprite with no texture, coloured yellow
	//m_2dRenderer->setRenderColour(1, 1, 0, 1);
	//m_2dRenderer->drawSprite(nullptr, 400, 400, 50, 50, 3.14159f * 0.25f, 1);
	
	// output some text, uses the last used colour
	char fps[32];
	sprintf_s(fps, 32, "FPS: %i", getFPS());
	m_2dRenderer->drawText(m_font, fps, 0, 720 - 32);
	m_2dRenderer->drawText(m_font, "Press Space for Deez Nutz!", 0, 720 - 64);

	// done drawing sprites
	m_2dRenderer->end();
}



//void Application2D::SaveGameState()
//{
//	std::ofstream file;
//	file.open("GameSave.dat", std::ios_base::out);	
//	//dump to file
//	//the player position as 
//	char info[32];
//	file << "xPos: " << m_player->m_position.m_x << "yPos" << m_player->m_position.m_y << std::endl;
//	/*sprintf_s(info, "xpos%f, %f", m_player->m_position.m_x, m_player->m_position.m_y);
//	file << info;*/
//	file.close();
//
//}

//void Application2D::LoadGameState()
//{
//	std::ifstream file;
//	file.open("GameSave.dat", std::ios_base::in);
//	std::string data;
//	char garbage[255];
//	while (getline(file, data))
//	{
//			
//			
//	}
//	file.close();
//}

void Player::Collision()
{

}
