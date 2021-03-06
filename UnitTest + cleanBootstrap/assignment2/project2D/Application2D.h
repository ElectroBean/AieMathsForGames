#pragma once

#include "Application.h"
#include "Renderer2D.h"
#include "Audio.h"
#include "Obect.h"
#include "aabb.h"

class Application2D : public aie::Application {
public:

	Application2D();
	virtual ~Application2D();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();
	void drawAABB(const aabb & aabb, aie::Renderer2D * renderer);

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Texture*		m_texture;
	aie::Texture*		m_shipTexture;
	aie::Font*			m_font;
	aie::Audio*			m_audio;
	aie::Texture*		m_bullet;

	float m_cameraX, m_cameraY;
	float m_timer;

	Object* NotShip;
	Object* NotShipChild;
	Object* NotShipChild2;

	aabb*	collision1;
	aabb*	collision2;
};