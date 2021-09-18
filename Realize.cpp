#include <iostream>
#include <cmath>
#include "Vector.h"
using namespace std;

Vector::Vector(double a, double b, double v)
{
	x = a;
	y = b;
	z = v;
}

/*Proiz::Proiz(double s)
{
	p = s;
}*/

void Vector::view_vector()
{
	cout << " V = (" << x << " " << y << " " << z << ")\n";
}

/*void Proiz::prosmotroper()
{
	cout << "Oper" << p;
}*/

void Vector::length_v(double rez)
{
	rez = abs(sqrt(x * x + y * y + z * z));

	cout << " Vector length = " << rez << "\n";
}

Vector Vector::operator+(Vector& v)
{
	return Vector(x + v.x, y + v.y, z + v.z);

}

Vector Vector::operator+=(Vector& v)
{
	this->x += v.x;
	this->y += v.y;
	this->z += v.z;
	return *this;
}


Vector Vector::operator-(Vector& v)
{
	return Vector(x - v.x, y - v.y, z - v.z);

}

Vector Vector::operator-=(Vector& v)
{
	this->x -= v.x;
	this->y -= v.y;
	this->z -= v.z;
	return *this;

}

Vector Vector::operator*(Vector& v)
{
	return Vector(x * v.x, y * v.y, z * v.z);

}

Vector Vector::operator*=(Vector& v)
{
	this->x *= v.x;
	this->y *= v.y;
	this->z *= v.z;
	return *this;

}

Vector Vector::operator*(double value)
{
	return Vector(x * value, y * value, z * value);

}

Vector Vector::operator*=(double value)
{
	this->x *= value;
	this->y *= value;
	this->z *= value;
	return *this;

}

/*double Vector::operator *(Vector& v)
{
	
	return x * v.x  + y * v.y + z * v.z;

}

double Vector::operator *=(Vector& v)
{
	this->x *= v.x;
	this->y *= v.y;
	this->z *= v.z;
	return *this;

}*/