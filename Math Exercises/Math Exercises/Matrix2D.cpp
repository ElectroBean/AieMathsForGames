#include "Matrix2D.h"



Matrix2D::Matrix2D(float a_pos1, float a_pos2, float a_pos3, float a_pos4)
{
	Matrix[0][0] = a_pos1;
	Matrix[0][1] = a_pos2;
	Matrix[1][0] = a_pos3;
	Matrix[1][1] = a_pos4;
}


Matrix2D::~Matrix2D()
{
}
