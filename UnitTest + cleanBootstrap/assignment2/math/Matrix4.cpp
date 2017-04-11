#include "Matrix4.h"



Matrix4::Matrix4()
{
}

Matrix4::Matrix4(float a_pos1, float a_pos2, float a_pos3, float a_pos4, float a_pos5, float a_pos6, float a_pos7, float a_pos8, float a_pos9)
{
}


Matrix4::~Matrix4()
{
}

Matrix4 Matrix4::operator+(const Matrix4 & a_second)
{
	Matrix4 alt;
	alt = *this;
	for (int i = 0; i < 16; i++)
	{
		alt.data[i] += a_second.data[i];
	}
	return alt;
}

Matrix4 Matrix4::operator-(const Matrix4 & a_second)
{
	Matrix4 alt;
	alt = *this;
	for (int i = 0; i < 16; i++)
	{
		alt.data[i] -= a_second.data[i];
	}
	return alt;
}

Matrix4 Matrix4::operator*(const Matrix4 & a_second)
{
	Matrix4 product;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			float sum = 0;
			for (int k = 0; k < 4; k++)
			{
				sum = sum + (data[k * 4 + i] * a_second.data[j * 4 + k]);
			}
			product.data[j * 4 + i] = sum;
		}
	}
	return product;
}

Matrix4::operator float*()
{
	return data;
}

Vector4 & Matrix4::operator[](int a_int)
{
	return columns[a_int];
	// TODO: insert return statement here
}
