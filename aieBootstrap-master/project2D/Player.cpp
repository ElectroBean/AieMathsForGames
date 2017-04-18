#include "Player.h"
#include <Texture.h>
#include "input.h"
#include <math.h>

Player::Player()
{
}

Player::Player(Vector2 Position, float shipSpeed, std::string shipTexture, float shipRotation, float rotateSpeed)
{
	m_shipPosition = Position;
	m_shipSpeed = shipSpeed;
	m_shipTexture = new aie::Texture(shipTexture.c_str());
	m_shipRotation = shipRotation;
	m_rotateSpeed = rotateSpeed;
	m_velocity = 1.0f;
}

Player::~Player()
{
	//delete m_shipTexture;
}

void Player::Update(float deltaTime)
{
	// input example
	aie::Input* input = aie::Input::getInstance();

	Vector2 direction(sin(m_shipRotation), cos(m_shipRotation));
	direction.Multiply(m_shipSpeed);

	if (m_velocity > 1)
	{
		m_shipPosition.x -= direction.x * m_velocity * deltaTime;
		m_shipPosition.y += direction.y * m_velocity * deltaTime;
	}

	// use arrow keys to move camera
	if (input->isKeyDown(aie::INPUT_KEY_UP))
	{
		m_shipPosition.x -= direction.x * m_velocity * deltaTime;
		m_shipPosition.y += direction.y * m_velocity * deltaTime;
		if (m_velocity <= 5.0f)
		{
			m_velocity += deltaTime;
		}
	}
	if (input->isKeyUp(aie::INPUT_KEY_UP))
	{
		if (m_velocity > 1)
		{
			m_velocity -= deltaTime * 2;
		}
	}
	if (input->isKeyDown(aie::INPUT_KEY_LEFT))
	{
		m_shipRotation += m_rotateSpeed * deltaTime;
	}
	if (input->isKeyDown(aie::INPUT_KEY_RIGHT))
	{
		m_shipRotation -= m_rotateSpeed * deltaTime;
	}
}

void Player::ScreenWrap(float a_screenHeight, float a_screenWidth)
{
	if (m_shipPosition.x > a_screenWidth)
	{
		m_shipPosition.x = a_screenWidth / a_screenWidth;
	}
	if (m_shipPosition.x < a_screenWidth / a_screenWidth)
	{
		m_shipPosition.x = a_screenWidth;
	}
	if (m_shipPosition.y > a_screenHeight)
	{
		m_shipPosition.y = a_screenHeight / a_screenHeight;
	}
	if (m_shipPosition.y < a_screenHeight / a_screenHeight)
	{
		m_shipPosition.y = a_screenHeight;
	}
}

//void Player::PlayerShoot(Bullets a_bullets[])
//{
//	for (int i = 0; i < 25; i++)
//	{
//		if (a_bullets[i].isBulletVisible)
//		{
//			continue;
//		}
//		a_bullets[i].isBulletVisible = true;
//
//		a_bullets[i].m_bulletPosition = this->m_shipPosition;
//	}
//}
