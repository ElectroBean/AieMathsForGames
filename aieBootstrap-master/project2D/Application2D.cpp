#include "Application2D.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include <math.h>

Application2D::Application2D() {

}

Application2D::~Application2D() {

}

bool Application2D::startup() {
	
	m_2dRenderer = new aie::Renderer2D();
	m_shipFollowerTexture = new aie::Texture("./textures/rock_small.png");
	m_Player = new Player(Vector2(600, 400), 300.0f, "./textures/ship.png", 0.0f, 5.0f);
	for (int i = 0; i < 25; i++)
	{
		m_Bullets[i] = new Bullets("./textures/bullet.png", 2.5f);
		m_Bullets[i]->isBulletVisible = true;
	}

	m_cameraX = 0;
	m_cameraY = 0;
	m_timer = 0;

	m_shipFollowerPosition = Vector2(10, 10);
	m_shipFollowerSpeed = 50;

	return true;
}

void Application2D::shutdown() 
{
	delete m_shipFollowerTexture;
	delete m_Player;
	delete m_2dRenderer;
}

void Application2D::update(float deltaTime) {
	aie::Input* input = aie::Input::getInstance();
	//
	m_timer += deltaTime;
	m_Player->Update(deltaTime);
	m_Player->ScreenWrap(getWindowHeight(), getWindowWidth());
	for (int i = 0; i < 25; i++)
	{
		m_Bullets[i]->Update(deltaTime);
	}
	
	Vector2 offset = m_Player->m_shipPosition;
	offset.Subtract(m_shipFollowerPosition);
	
	float distance = offset.getMagnitude();
	offset.normalize();
	if (distance < m_shipFollowerSpeed)
	{
		//offset.Multiply(distance);
	}
	else
	{
		//offset.Multiply(m_shipFollowerSpeed);
	}
	m_shipFollowerPosition.Add(offset);
	
	// exit the application
	if (input->isKeyDown(aie::INPUT_KEY_ESCAPE))
	{
		quit();
	}
}

void Application2D::draw() {

	// wipe the screen to the background colour
	clearScreen();

	// set the camera position before we begin rendering
	m_2dRenderer->setCameraPos(m_cameraX, m_cameraY);

	// begin drawing sprites
	m_2dRenderer->begin();

	//player sprite
	m_2dRenderer->drawSprite(m_Player->m_shipTexture, m_Player->m_shipPosition.x, m_Player->m_shipPosition.y, 0, 0, m_Player->m_shipRotation, 1);


	// ship follower sprite 
	m_2dRenderer->drawSprite(m_shipFollowerTexture, m_shipFollowerPosition.x, m_shipFollowerPosition.y, 0, 0, 0, 1);

	for (int i = 0; i < 25; i++)
	{
		if (m_Bullets[i]->isBulletVisible)
		{
			m_2dRenderer->drawSprite(m_Bullets[i]->m_shipTexture, m_Bullets[i]->m_bulletPosition.x, m_Bullets[i]->m_bulletPosition.y, 0, 0, 0, 1);
		}
	}

	// done drawing sprites
	m_2dRenderer->end();
}