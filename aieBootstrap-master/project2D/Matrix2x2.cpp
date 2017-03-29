#include "Matrix2x2.h"
#include <cmath>



void Matrix2x2::setRotation(float a_angle)
{
	data[0] = cos(a_angle);
	data[1] = -sin(a_angle);
	data[2] = sin(a_angle);
	data[3] = cos(a_angle);
}

void Matrix2x2::setRotationDeg(float a_angle)
{
	a_angle = (a_angle * 3.14159265f / 180.0f);
	setRotation(a_angle);
}

Vector2 Matrix2x2::operator*(const Vector2 & a_v2)
{

	return Vector2(data[0] * a_v2.x + data[2] * a_v2.y, 
					data[1] * a_v2.x + data[3] * a_v2.y);
}

Matrix2x2::Matrix2x2()
{
}


Matrix2x2::~Matrix2x2()
{
}
