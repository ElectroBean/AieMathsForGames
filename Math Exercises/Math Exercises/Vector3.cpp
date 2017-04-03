#include "Vector3.h"
#include <iostream>

Vector3::Vector3()
{
	x = 0;
	y = 0;
	z = 0;
}

Vector3::Vector3(float a_x, float a_y, float a_z)
{
	x = a_x;
	y = a_y;
	z = a_z;
}

const Vector3& Vector3::Translate(const Vector3& a_first, const Vector3& a_second)
{
	Vector3* destination = new Vector3();
	destination->x = (a_first.x + a_second.x);
	destination->y = (a_first.y + a_second.y);
	destination->z = (a_first.z + a_second.z);

	return *destination;
}
const Vector3& Vector3::Add(const Vector3& a_first, const Vector3& a_second)
{
	Vector3* product = new Vector3();
	product->x = (a_first.x + a_second.x);
	product->y = (a_first.y + a_second.y);
	product->z = (a_first.z + a_second.z);

	return *product;
}
const Vector3& Vector3::Subtract(const Vector3& a_first, const Vector3& a_second)
{
	Vector3* product = new Vector3();
	product->x = (a_first.x - a_second.x);
	product->y = (a_first.y - a_second.y);
	product->z = (a_first.z - a_second.z);

	return *product;
}
const Vector3& Vector3::Scale(const Vector3& a_point, float a_scalar)
{
	Vector3* product = new Vector3();
	product->x = (a_point.x * a_scalar);
	product->y = (a_point.y * a_scalar);
	product->z = (a_point.z * a_scalar);

	return *product;
}
const Vector3& Vector3::Multiply(const Vector3& a_point, float a_scalar)
{
	Vector3* product = new Vector3();
	product->x = (a_point.x * a_scalar);
	product->y = (a_point.y * a_scalar);
	product->z = (a_point.z * a_scalar);

	return *product;
}
const Vector3& Vector3::Divide(const Vector3& a_point, float a_scalar)
{
	Vector3* product = new Vector3();
	product->x = (a_point.x / a_scalar);
	product->y = (a_point.y / a_scalar);
	product->z = (a_point.z / a_scalar);

	return *product;
}

float Vector3::getMagnitude()
{
	return sqrt((x * x) + (y * y) + (z * z));
}

void Vector3::normalize()
{
	float Length = getMagnitude();

	*this = Divide(*this, Length);
}

Vector3 Vector3::getNormalized()
{
	Vector3 normalisedVector = *this;
	normalisedVector.normalize();
	return normalisedVector;
}

float Vector3::dotProduct(const Vector3 & a_second)
{
	return (x * a_second.x + y * a_second.y + z * a_second.z);
}

const Vector3 & Vector3::crossProduct(const Vector3 & a_second)
{
	Vector3 crossProduct;

	crossProduct.x = y * a_second.z - z * a_second.y;
	crossProduct.y = z * a_second.x - x * a_second.z;
	crossProduct.z = x * a_second.y - y * a_second.x;

	return crossProduct;
}

void Vector3::setRotateX(float a_angle)
{

}

void Vector3::setRotateY(float a_angle)
{

}

void Vector3::setRotateZ(float a_angle)
{

}

void Vector3::operator+(const Vector3 & a_second) 
{
	this->x += a_second.x;
	this->y += a_second.y;
	this->z += a_second.z;
}

void Vector3::operator-(const Vector3 & a_second) 
{
	this->x -= a_second.x;
	this->y -= a_second.y;
	this->z -= a_second.z;
}

void Vector3::operator*(const float a_second) 
{
	this->x *= a_second;
	this->y *= a_second;
	this->z *= a_second;
}

void Vector3::operator/(const float a_second) 
{
	this->x /= a_second;
	this->y /= a_second;
	this->z /= a_second;
}
