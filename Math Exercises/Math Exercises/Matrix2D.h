#pragma once
#include <iostream>
#include "Vector2.h"

class Matrix2D
{
public:
	union {
		struct {
			float m00, m01, m10, m11;
		};
		float data[4];
	};
	Matrix2D();
	Matrix2D(float a_pos1, float a_pos2, float a_pos3, float a_pos4);
	~Matrix2D();

	Vector2 operator*(const Vector2& a_RHS);
	void operator+(const Matrix2D& a_second);
	void operator-(const Matrix2D& a_second);
	void operator*(const float a_second);
	void operator/(const float a_second);
	void operator*(const Matrix2D& a_second);
};

