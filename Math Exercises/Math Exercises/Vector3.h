#pragma once

struct Vector3
{
public:

	Vector3::Vector3();
	Vector3::Vector3(float x, float y, float z);
	const Vector3& Translate(const Vector3& a_first, const Vector3& a_second);
	void Add(const Vector3& a_second);
	void Subtract(const Vector3& a_second);
	const Vector3& Scale(const Vector3& a_point, float a_scalar);
	void Multiply(float a_scalar);
	void Divide(float a_scalar);
	float getMagnitude();
	void normalise();
	Vector3 Vector3::getNormalised();
	float dotProduct(const Vector3& a_second);
	const Vector3& crossProduct(const Vector3& a_second);
	void setRotateXRad(float a_angle);
	void setRotateYRad(float a_angle);
	void setRotateZRad(float a_angle);


	Vector3 operator+(const Vector3& a_second);
	Vector3 operator-(const Vector3& a_second);
	Vector3 operator*(const float a_second);
	Vector3 operator/(const float a_second);

protected:

	float x;
	float y;
	float z;
};