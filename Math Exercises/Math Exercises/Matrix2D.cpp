#include "Matrix2D.h"

Matrix2D::Matrix2D()
{
	m00 = 1.0f;
	m01 = 0.0f;
	m10 = 0.0f;
	m11 = 1.0f;
}

Matrix2D::Matrix2D(float a_pos1, float a_pos2, float a_pos3, float a_pos4)
{
	m00 = a_pos1;
	m01 = a_pos2;
	m10 = a_pos3;
	m11 = a_pos4;
}


Matrix2D::~Matrix2D()
{
}

Vector2 Matrix2D::operator*(const Vector2 & a_RHS)
{
	Vector2 result;
	result.x = m00 * a_RHS.x + m01 * a_RHS.y;
	result.y = m10 * a_RHS.x + m11 * a_RHS.y;
	return result;
}

void Matrix2D::operator+(const Matrix2D & a_second)
{
	
}

void Matrix2D::operator-(const Matrix2D & a_second)
{

}

void Matrix2D::operator*(const float a_second)
{

}

void Matrix2D::operator/(const float a_second)
{

}

void Matrix2D::operator*(const Matrix2D & a_second)
{

}
