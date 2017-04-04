#pragma once
#include "Vector3.h"

class Matrix3
{
public:
public:
	union {
		struct {
			float m0000, m0001, m0010, 
				  m0011, m0100, m0101,
				  m0100, m0101, m1000;
		};
		float data[9];
	};
	Matrix3();
	Matrix3(float a_pos1, float a_pos2, float a_pos3, 
			float a_pos4, float a_pos5, float a_pos6, 
			float a_pos7, float a_pos8, float a_pos9);
	~Matrix3();

	Vector3 operator*(const Vector3& a_RHS);
	Vector3 operator+(const Matrix3& a_second);
	Vector3 operator-(const Matrix3& a_second);
	Matrix3 operator*(const Matrix3& a_second);

	explicit operator float*();

	void setRotate(const float a_fRotation);
};

