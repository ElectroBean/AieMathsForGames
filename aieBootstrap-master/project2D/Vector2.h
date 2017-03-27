#pragma once
class Vector2
{
public:

	Vector2::Vector2();
	Vector2::~Vector2();
	Vector2::Vector2(float x, float y);
	void Translate(const Vector2& a_second);
	void Add(const Vector2& a_second);
	void Subtract(const Vector2& a_second);
	void Multiply(float a_scalar);
	void Divide(float a_scalar);
	float getMagnitude();
	void normalize();
	Vector2 Vector2::getNormalized();
	Vector2 Vector2::Direction();

	float x;
	float y;
};

