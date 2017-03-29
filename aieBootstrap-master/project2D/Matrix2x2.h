#pragma once
#include "Vector2.h"
class Matrix2x2
{
public:
	float data[4]{1.0f, 0.0f, 0.0f, 1.0f};

	void setRotation(float a_angle);			//set rotation angle in radians
	void setRotationDeg(float a_angle);			//set rotation angle in degrees
	Vector2 operator*(const Vector2& a_v2);

	Matrix2x2();
	~Matrix2x2();
};

