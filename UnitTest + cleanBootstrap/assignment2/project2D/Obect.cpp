#include "Obect.h"



Object::Object(const Vector3& a_pos, const float a_rotation, aie::Texture* const a_texture)
{
	//identity matrix
	Local = new Matrix3();
	//set rotation of matrix
	Local->setRotateZ(a_rotation);
	//set direction (right, forward, position)
	V3Direction = (*Local)[1];
	//set position
	(*Local)[2] = a_pos;

	Texture = a_texture;

	Global = new Matrix3(*Local);
}


Object::~Object()
{
	delete Local;
	delete Global;
}

void Object::Update(const float deltaTime)
{
	aie::Input* input = aie::Input::getInstance();
	if (!parent)
	{
		ScreenWrap();
	}

	if (parent)
	{
		*Global = *(parent->Global) * *(Local);
		Global->columns[2] = Global->columns[2] + (V3Velocity * deltaTime);
		Local->columns[2] = parent->Global->columns[2] + Vector3(0.1, 0.1, 0);
	}
	else
	{
		Local->columns[2] = Local->columns[2] + (V3Velocity * deltaTime);
		*Global = *Local;

		SetRotation(rotation);
		SetSpeed(fSpeed);

		if (input->isKeyDown(aie::INPUT_KEY_UP))
		{
			fSpeed += 300.0f * deltaTime;
		}
		if (input->isKeyUp(aie::INPUT_KEY_UP))
		{
			if (fSpeed > 0)
			{
				fSpeed -= 200.0f * deltaTime;
			}
		}
		if (input->isKeyDown(aie::INPUT_KEY_LEFT))
		{
			rotation += 2.50f * deltaTime;
		}
		if (input->isKeyDown(aie::INPUT_KEY_RIGHT))
		{
			rotation -= 2.50f * deltaTime;
		}
	}
}

void Object::Draw(aie::Renderer2D * a_Render)
{
	a_Render->drawSpriteTransformed3x3(Texture, (float*)Global);
}

void Object::SetSpeed(const float a_speed)
{
	fSpeed = a_speed;
	V3Velocity = fSpeed * Global->columns[1];
}

void Object::SetRotation(const float a_rotation)
{
	Local->setRotateZ(a_rotation);
	V3Velocity = fSpeed * Local->columns[1];
}

void Object::SetParent(Object * a_parent)
{
	parent = a_parent;
	Local->columns[1] = a_parent->Global->columns[1];
}

void Object::ScreenWrap()
{
	if (Local->columns[2].x > 1280)
	{
		Local->columns[2].x = 0;
	}
	if (Local->columns[2].x < 0)
	{
		Local->columns[2].x = 1280;
	}
	if (Local->columns[2].y > 720)
	{
		Local->columns[2].y = 0;
	}
	if (Local->columns[2].y < 0)
	{
		Local->columns[2].y = 720;
	}
}
