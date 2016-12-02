#pragma once

#include "Application.h"
#include "Renderer2D.h"
#include "Audio.h"
#include "MyMath.h"

class Player;

class Application2D : public aie::Application {
public:

	Application2D();
	virtual ~Application2D();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();
	
protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Texture*		m_texture;
	aie::Texture*		m_shipTexture;
	aie::Font*			m_font;
	aie::Audio*			m_audio;

	float m_cameraX, m_cameraY;
	float m_timer;
	float m_rotDegrees;
	
	Player* m_player;
};

class Player
{
public:
	Player() {
		m_dead = false;
	}
	bool m_dead;
	/*Vector2 m_shoot = m_position.m_x;
	Vector2 PlayerShoot(Vector2 v) { m_shoot.m_= =+}*/
	Vector2 m_position;
};

//class Enemy : public Enemy
//{
//
//};
