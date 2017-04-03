#include "Vector4.h"
#include <math.h>


Vector4::Vector4()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->w = 1;
}

Vector4::Vector4(float x, float y, float z, float w)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}


Vector4::~Vector4()
{
}

const Vector4 & Vector4::Translate(const Vector4 & a_first, const Vector4 & a_second)
{
	// TODO: insert return statement here
	return Vector4();
}

const Vector4 & Vector4::Add(const Vector4 & a_first, const Vector4 & a_second)
{
	// TODO: insert return statement here
	return Vector4();
}

const Vector4 & Vector4::Subtract(const Vector4 & a_first, const Vector4 & a_second)
{
	// TODO: insert return statement here
	return Vector4();
}

const Vector4 & Vector4::Scale(const Vector4 & a_point, float a_scalar)
{
	// TODO: insert return statement here
	return Vector4();
}

const Vector4 & Vector4::Multiply(const Vector4 & a_point, float a_scalar)
{
	// TODO: insert return statement here
	return Vector4();
}

const Vector4 & Vector4::Divide(const Vector4 & a_point, float a_scalar)
{
	return Vector4();
}

float Vector4::getMagnitude()
{
	return sqrt((x * x) + (y * y) + (z * z) + (w * w));
}

void Vector4::normalize()
{
	float Length = getMagnitude();
	*this = Divide(*this, Length);
}

Vector4 Vector4::getNormalized()
{
	Vector4* normalised = this;
	normalised->normalize();
	return *normalised;
}

float Vector4::dotProduct(const Vector4 & a_second)
{
	return (x * a_second.x + y * a_second.y + z * a_second.z + w * a_second.w);
}

const Vector4 & Vector4::crossProduct(const Vector4 & a_second)
{
	Vector4 crossProduct;

	crossProduct.x = y * a_second.z - z * a_second.y;
	crossProduct.y = z * a_second.x - x * a_second.z;
	crossProduct.z = x * a_second.y - y * a_second.x;
	crossProduct.w = 0;

	return crossProduct;
}

void Vector4::operator+(const Vector4 & a_second)
{
	x += a_second.x;
	y += a_second.y;
	z += a_second.z;
	w += a_second.w;
}

void Vector4::operator-(const Vector4 & a_second)
{
	x -= a_second.x;
	y -= a_second.y;
	z -= a_second.z;
	w -= a_second.w;
}

void Vector4::operator*(const float a_second)
{
	x *= a_second;
	y *= a_second;
	z *= a_second;
	w *= a_second;
}

void Vector4::operator/(const float a_second)
{
	x /= a_second;
	y /= a_second;
	z /= a_second;
	w /= a_second;
}
