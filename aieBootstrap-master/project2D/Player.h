#pragma once
#include "Vector2.h"
#include "Application2D.h"
#include <string>

class Player
{
public:
	Player();
	Player(Vector2 Position, float shipSpeed, std::string shipTexture);
	~Player();
	void Update(float deltaTime);

	aie::Texture* m_shipTexture;
	Vector2 m_shipPosition;
	float m_shipSpeed;
};

