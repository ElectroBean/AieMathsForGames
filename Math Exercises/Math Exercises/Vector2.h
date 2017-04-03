#pragma once
struct Vector2
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
	void setRotateRad(float a_angle);
	void setRotateDeg(float a_angle);

	void operator+(const Vector2& a_second) const;
	void operator-(const Vector2& a_second) const;
	void operator*(const float a_second) const;
	void operator/(const float a_second) const;

protected:
	float x;
	float y;
};

