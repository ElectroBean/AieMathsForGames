#include "Bullets.h"
#include <Texture.h>

Bullets::Bullets()
{

}

Bullets::Bullets(std::string a_texture, float a_bulletSpeed)
{
	m_shipTexture = new aie::Texture(a_texture.c_str());
	m_bulletPosition = Vector2(50, 50);
	m_bulletSpeed = a_bulletSpeed;
	m_velocity = 0;
	isBulletVisible = false;
	m_direction = Vector2(0, 0);
}


Bullets::~Bullets()
{
}

void Bullets::Update(float deltaTime)
{
	m_bulletPosition.x -= m_direction.x * m_velocity * deltaTime;
	m_bulletPosition.y += m_direction.y * m_velocity * deltaTime;
}

void Bullets::dealDamage()
{

}

void Bullets::warp(float a_screenHeight, float a_screenWidth)
{
	if (m_bulletPosition.x > a_screenWidth)
	{
		m_bulletPosition.x = a_screenWidth / a_screenWidth;
	}
	if (m_bulletPosition.x < a_screenWidth / a_screenWidth)
	{
		m_bulletPosition.x = a_screenWidth;
	}
	if (m_bulletPosition.y > a_screenHeight)
	{
		m_bulletPosition.y = a_screenHeight / a_screenHeight;
	}
	if (m_bulletPosition.y < a_screenHeight / a_screenHeight)
	{
		m_bulletPosition.y = a_screenHeight;
	}
}
