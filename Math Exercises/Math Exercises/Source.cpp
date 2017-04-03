#include <iostream>
#include "Vector3.h"
#include "Vector2.h"
#include "Matrix2D.h"

int main()
{
	Vector3 test = Vector3(10, 0, 0);
	test - Vector3(1, 1, 1);
	float magnitude = test.getMagnitude();
	test.normalize();
	Matrix2D* matrix = new Matrix2D(1 ,2, 3, 4);
	Vector2 v2(0, 5);
	v2.setRotateDeg(90);

	system("pause");
}