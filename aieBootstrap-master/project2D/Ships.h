#pragma once
#include "Renderer2D.h"

class Ships
{
public:
	Ships();
	Ships(int aHealth, int aDamage, int aSpeed, aie::Texture* aShipTexture, float aPosX, float aPosY);
	~Ships();

protected:
	int				 m_iHealth;
	int				 m_iDamage;
	float			 m_iSpeed;
	aie::Texture*	 m_tShipTexture;
	float			 m_fPosX;
	float			 m_fPosY;
};

