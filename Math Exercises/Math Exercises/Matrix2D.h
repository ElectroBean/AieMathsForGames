#pragma once
#include <iostream>

class Matrix2D
{
public:
	Matrix2D(float a_pos1, float a_pos2, float a_pos3, float a_pos4);
	~Matrix2D();

	float Matrix[2][2]{{1, 0}, {0, 1}};
};

