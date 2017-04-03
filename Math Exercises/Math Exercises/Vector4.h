#pragma once
class Vector4
{
public:
	Vector4::Vector4();
	Vector4::Vector4(float x, float y, float z, float w);
	Vector4::~Vector4();
	const Vector4& Translate(const Vector4& a_first, const Vector4& a_second);
	const Vector4& Add(const Vector4& a_first, const Vector4& a_second);
	const Vector4& Subtract(const Vector4& a_first, const Vector4& a_second);
	const Vector4& Scale(const Vector4& a_point, float a_scalar);
	const Vector4& Multiply(const Vector4& a_point, float a_scalar);
	const Vector4& Divide(const Vector4& a_point, float a_scalar);
	float getMagnitude();
	void normalize();
	Vector4 Vector4::getNormalized();
	float dotProduct(const Vector4& a_second);
	const Vector4& crossProduct(const Vector4& a_second);

	void operator+(const Vector4& a_second);
	void operator-(const Vector4& a_second);
	void operator*(const float a_second);
	void operator/(const float a_second);

protected:

	float x;
	float y;
	float z;
	float w;
};

