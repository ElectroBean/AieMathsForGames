#include "Ships.h"



Ships::Ships()
{
}

Ships::Ships(int aHealth, int aDamage, int aSpeed, aie::Texture* aShipTexture, float aPosX, float aPosY)
{
	m_iHealth = aHealth;
	m_iDamage = aDamage;
	m_iSpeed = aSpeed;
	m_tShipTexture = aShipTexture;
	m_fPosX = aPosX;
	m_fPosY = aPosY;
}


Ships::~Ships()
{
}
