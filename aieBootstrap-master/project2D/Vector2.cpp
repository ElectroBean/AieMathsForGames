#include "Vector2.h"
#include <iostream>


Vector2::Vector2()
{
}


Vector2::~Vector2()
{
}

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Vector2::Translate(const Vector2 & a_second)
{
	x += a_second.x;
	y += a_second.y;
}

void Vector2::Add(const Vector2 & a_second)
{
	x += a_second.x;
	y += a_second.y;
}

void Vector2::Subtract(const Vector2 & a_second)
{
	x -= a_second.x;
	y -= a_second.y;
}

void Vector2::Multiply(float a_scalar)
{
	x *= a_scalar;
	y *= a_scalar;
}

void Vector2::Divide(float a_scalar)
{
	x /= a_scalar;
	y /= a_scalar;
}

float Vector2::getMagnitude()
{
	return sqrt((x * x) + (y * y));
}

void Vector2::normalize()
{
	float Length = getMagnitude();

	Divide(Length);
}

Vector2 Vector2::getNormalized()
{
	Vector2 normalisedVector = *this;
	normalisedVector.normalize();
	return normalisedVector;
}

Vector2 Vector2::Direction()
{
	float magnitude = getMagnitude();
	Vector2 dir;

	if (magnitude == 0) {
		dir.x = 0.0f;
		dir.y = 0.0f;
	}
	else {
		dir.x = x / magnitude;
		dir.y = y / magnitude;
	}

	return dir;
}