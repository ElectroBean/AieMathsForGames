#include <iostream>
#include "Vector3.h"
#include "Vector2.h"
#include "Matrix2D.h"

int main()
{
	Vector3 test = Vector3(10, 0, 0);
	test - Vector3(1, 1, 1);
	float magnitude = test.getMagnitude();
	test.normalise();
	Matrix2D Matrix;
	Vector2 v2(0, 5);
	v2.normalise();
	Vector3 crossProductTest = Vector3(2, 1, 13).crossProduct(Vector3(1, 2, 3));
	Vector2 multiplyTest = Matrix2D(4, 2, 3, 1) * Vector2(2, 2);
	Matrix2D bla;
	v2.setRotateDeg(90);

	system("pause");
}