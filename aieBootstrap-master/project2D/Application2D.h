#pragma once

#include "Application.h"
#include "Renderer2D.h"
#include "Audio.h"
#include "Vector2.h"
#include "Player.h"

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
	aie::Texture*		m_shipFollowerTexture;
	class Player*		m_Player;

	Vector2* m_shipPosition;
	float m_shipSpeed;

	Vector2 m_shipFollowerPosition;
	float m_shipFollowerSpeed;

	float m_cameraX, m_cameraY;
	float m_timer;
};