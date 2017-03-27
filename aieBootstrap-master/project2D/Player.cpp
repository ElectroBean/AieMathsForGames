#include "Player.h"
#include <Texture.h>
#include "input.h"

Player::Player()
{
}

Player::Player(Vector2 Position, float shipSpeed, std::string shipTexture)
{
	m_shipPosition = Position;
	m_shipSpeed = shipSpeed;
	m_shipTexture = new aie::Texture(shipTexture.c_str());
}

Player::~Player()
{
	delete m_shipTexture;
}

void Player::Update(float deltaTime)
{
	// input example
	aie::Input* input = aie::Input::getInstance();

	// use arrow keys to move camera
	if (input->isKeyDown(aie::INPUT_KEY_UP))
		m_shipPosition.y += m_shipSpeed * deltaTime;

	if (input->isKeyDown(aie::INPUT_KEY_DOWN))
		m_shipPosition.y -= m_shipSpeed * deltaTime;

	if (input->isKeyDown(aie::INPUT_KEY_LEFT))
		m_shipPosition.x -= m_shipSpeed * deltaTime;

	if (input->isKeyDown(aie::INPUT_KEY_RIGHT))
		m_shipPosition.x += m_shipSpeed * deltaTime;
}
