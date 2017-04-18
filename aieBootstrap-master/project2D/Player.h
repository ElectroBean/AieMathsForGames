#pragma once
#include "Vector2.h"
#include "Application2D.h"
#include <string>

class Player
{
public:
	Player();
	Player(Vector2 Position, float shipSpeed, std::string shipTexture, float shipRotation, float rotateSpeed);
	~Player();
	void Update(float deltaTime);

	void ScreenWrap(float a_screenHeight, float a_screenWidth);
	//void PlayerShoot(Bullets[]);

	aie::Texture* m_shipTexture;
	Vector2 m_shipPosition;
	float m_shipSpeed;
	float m_shipRotation;
	float m_rotateSpeed;
	float m_velocity;
};

