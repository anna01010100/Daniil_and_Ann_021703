#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
	Vector v1(5, 6, 7);
	Vector v2(7, 8, 9);
	Vector v5(1, 2, 3);
	Vector v3, v4;

	double v;
	v1.view_vector();
	v1.length_v();

	v2.view_vector();
	v2.length_v();

	v3 = v1 + v2;
	v3.view_vector();

	v3 = v1 - v2;
	v3.view_vector();

	v3 += v1;
	v3.view_vector();

	v3 += v2;
	v3.view_vector();

	v4 *= v5;
	v4.view_vector();

	v5 *= 2;
	v5.view_vector();

	


}