#pragma once

struct Vector3
{
public:

	Vector3::Vector3();
	Vector3::Vector3(float x, float y, float z);
	const Vector3& Translate(const Vector3& a_first, const Vector3& a_second);
	const Vector3& Add(const Vector3& a_first, const Vector3& a_second);
	const Vector3& Subtract(const Vector3& a_first, const Vector3& a_second);
	const Vector3& Scale(const Vector3& a_point, float a_scalar);
	const Vector3& Multiply(const Vector3& a_point, float a_scalar);
	const Vector3& Divide(const Vector3& a_point, float a_scalar);
	float getMagnitude();
	void normalize();
	Vector3 Vector3::getNormalized();
	float dotProduct(const Vector3& a_second);
	const Vector3& crossProduct(const Vector3& a_second);
	void setRotateX(float a_angle);
	void setRotateY(float a_angle);
	void setRotateZ(float a_angle);

	void operator+(const Vector3& a_second);
	void operator-(const Vector3& a_second);
	void operator*(const float a_second);
	void operator/(const float a_second);

protected:

	float x;
	float y;
	float z;
};