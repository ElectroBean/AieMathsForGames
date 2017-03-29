#pragma once
#include "Vector2.h"
#include "Application2D.h"
#include <string>
#include "Player.h"

class Bullets
{
public:
	Bullets();
	Bullets(std::string a_texture, float a_bulletSpeed);
	~Bullets();
	void dealDamage();
	void warp(float a_screenHeight, float a_screenWidth);
	void Update(float deltaTime);

	aie::Texture* m_shipTexture;
	Vector2		  m_bulletPosition;
	Vector2		  m_direction;
	float		  m_bulletSpeed;
	float		  m_velocity;
	bool		  isBulletVisible;
};

