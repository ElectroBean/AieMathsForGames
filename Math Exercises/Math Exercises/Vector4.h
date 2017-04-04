#pragma once
class Vector4
{
public:
	union {
		struct {
			float x;
			float y;
			float z;
			float w;
		};
		float data[4];
	};

	Vector4::Vector4();
	Vector4::Vector4(float x, float y, float z, float w);
	Vector4::~Vector4();
	const Vector4& Translate(const Vector4& a_first, const Vector4& a_second);
	void Add( const Vector4& a_second);
	void Subtract( const Vector4& a_second);
	void Scale( float a_scalar);
	void Multiply( float a_scalar);
	void Divide( float a_scalar);
	float getMagnitude();
	void normalize();
	Vector4 Vector4::getNormalized();
	float dotProduct(const Vector4& a_second);
	const Vector4& crossProduct(const Vector4& a_second);
	void setRotateXRad(float a_angle);
	void setRotateYRad(float a_angle);
	void setRotateZRad(float a_angle);

	void operator+(const Vector4& a_second);
	void operator-(const Vector4& a_second);
	void operator*(const float a_second);
	void operator/(const float a_second);

};

