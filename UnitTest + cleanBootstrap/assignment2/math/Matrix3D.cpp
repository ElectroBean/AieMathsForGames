#include "Matrix3D.h"
#include <cmath>


Matrix3::Matrix3()
{
	m0000 = 1; 
	m0001 = 0;
	m0010 = 0;
	m0011 = 0;
	m0100 = 1;
	m0101 = 0;
	m0100 = 0;
	m0101 = 0;
	m1000 = 1;
}

Matrix3::Matrix3(float a_pos1, float a_pos2, float a_pos3,
				 float a_pos4, float a_pos5, float a_pos6,
				 float a_pos7, float a_pos8, float a_pos9)
{
	m0000 = a_pos1;
	m0001 = a_pos2;
	m0010 = a_pos3;
	m0011 = a_pos4;
	m0100 = a_pos5;
	m0101 = a_pos6;
	m0100 = a_pos7;
	m0101 = a_pos8;
	m1000 = a_pos9;
}

Matrix3::~Matrix3()
{
}

Vector3 Matrix3::operator*(const Vector3 & a_RHS)
{
	Vector3 result;
	result.x = m00 * a_RHS.x + m10 * a_RHS.y;
	result.y = m01 * a_RHS.x + m11 * a_RHS.y;
	return result;
}

Vector3 Matrix3::operator+(const Matrix3 & a_second)
{

}

Vector3 Matrix3::operator-(const Matrix3 & a_second)
{

}

Matrix3 Matrix3::operator*(const Matrix3 & a_second)
{
	return Matrix3((m00 * a_second.m00 + m10 * a_second.m01),
		(m01 * a_second.m00 + m11 * a_second.m01),
		(m00 * a_second.m10 + m10 * a_second.m11),
		(m01 * a_second.m10 + m11 * a_second.m11)
	);
}

Matrix3::operator float*()
{
	return data;
}

void Matrix3::setRotate(const float a_fRotation)
{
	m00 = cos(a_fRotation);
	m10 = -sin(a_fRotation);
	m01 = sin(a_fRotation);
	m11 = cos(a_fRotation);
}