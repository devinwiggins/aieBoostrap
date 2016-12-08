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
//	void SaveGameState();
//	void LoadGameState();
	
	
protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Texture*		m_texture;
	aie::Texture*		m_shipTexture;
	aie::Texture*		m_AsteroidTextureSmall;
	aie::Texture*		m_AsteroidTextureMedium;
	aie::Texture*		m_AsteroidTextureLarge;
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
		m_dead = false; // Player is not yet dead
		m_position.m_x = 1280/2; // initializes the position to the middle of the screen
		m_position.m_y = 720/2; 
	}
	void Collision();
	bool m_dead;
	Vector2 m_position; // player Position
	Vector2 m_isShooting;
};

