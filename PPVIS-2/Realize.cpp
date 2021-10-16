#include<iostream>
#include "Flat_geom_shape.h"

using namespace std;

/*..........................Class Flat_shape...........................*/

Flat_shape::Flat_shape(int new_line)
{
	line = new_line;
}

int Flat_shape::get_line()
{
	return line;
}

void Flat_shape::draw() 
{
	cout << "Flat Shape";
}

void Flat_shape::input()
{
	
}


/*..........................Class Flat_shape...........................*/


/*...........................Class Triangle............................*/

Triangle::Triangle(int new_line, int a, int b, int c) : Flat_shape (new_line)
{
	x = a;
	y = b;
	z = c;
}

int Triangle:: ret_x()
{
	return x;
}

int Triangle::ret_y()
{
	return y;
}

int Triangle::ret_z()
{
	return z;
}

void::Triangle::input()
{
	cout<<"Data entry for a ";
	cout << "triangle\n";
	line = 3;
	cout << "Side a: ";
	cin >> x;
	cout << "Side b: ";
	cin >> y;
	cout << "Side c: ";
	cin >> z;
	system("cls");
}

void Triangle::draw()
{
	cout << "Triangle:\n"<< "Number of lines: " << get_line() << "\n" << "Side a: " << ret_x() << "\n" << "Side b: " << ret_y() <<"\n" << "Side c: " << ret_z() << "\n";
}


/*...........................Class Triangle............................*/


/*........................Class Right triangle.........................*/

Right_triangle::Right_triangle(int new_angle, int new_line, int a, int b, int c) : Triangle(new_line, a, b, c), Flat_shape(new_line)
{
	angle = new_angle;
}

int Right_triangle::ret_angle()
{
	return angle;
}

void::Right_triangle::input()
{
	cout << "Data entry for a ";
	cout << "right triangle\n";
	angle = 90;
	line = 3;
	cout << "Side a: ";
	cin >> x;
	cout << "Side b: ";
	cin >> y;
	cout << "Side c: ";
	z = sqrt(x * x + y * y);
	system("cls");
}

void Right_triangle::draw() 
{
	cout << "\nRight ";
	Triangle::draw();
	cout << "Angle: " << ret_angle() << "\n";
}



/*........................Class Right triangle.........................*/


/*........................Class Acute triangle.........................*/

Acute_triangle::Acute_triangle(int new_angle, int new_line, int a, int b, int c, int new_angle2, int new_angle3) : Right_triangle(new_angle, new_line, a, b, c), Triangle(new_line, a, b, c), Flat_shape(new_line)
{
	angle2 = new_angle2;
	angle3 = new_angle3;
}

int Acute_triangle::ret_angle2()
{
	return angle2;
}

int Acute_triangle::ret_angle3()
{
	return angle3;
}

void::Acute_triangle::input()
{
	cout << "Data entry for a ";
	cout << "acute triangle\n";

	do {
		cout << "Angle 1: ";
		cin >> angle;
	} while (angle >= 90);

	do {
		cout << "Angle 2: ";
		cin >> angle2;
	} while (angle2 >= 90);

	do {
		cout << "Angle 3: ";
		cin >> angle3;
	} while (angle3 >= 90);

	line = 3;
	cout << "Side a: ";
	cin >> x;
	cout << "Side b: ";
	cin >> y;
	cout << "Side c: ";
	cin >> z;
	system("cls");
}

void Acute_triangle::draw()
{
	cout << "\nAcute ";
	Triangle::draw();
	cout << "Angle 1: " << ret_angle() << "\n" << "Angle 2: " << ret_angle2() << "\n" << "Angle 3: " << ret_angle3() << "\n";
}

/*........................Class Acute triangle.........................*/


/*........................Class Obtuse triangle........................*/


Obtuse_triangle::Obtuse_triangle(int new_angle, int new_line, int a, int b, int c) : Right_triangle(new_angle, new_line, a, b, c), Triangle(new_line, a, b, c), Flat_shape(new_line)
{
	
}

void::Obtuse_triangle::input()
{
	cout << "Data entry for a ";
	cout << "obtuse triangle\n";
	do {
		cout << "Angle : ";
		cin >> angle;
	} while (angle <= 90);
	line = 3;
	cout << "Side a: ";
	cin >> x;
	cout << "Side b: ";
	cin >> y;
	do {
		cout << "Side c: ";
		cin >> z;
	} while (z<x+y);
	system("cls");
}

void Obtuse_triangle::draw()
{
	cout << "\nObtuse ";
	Triangle::draw();
	cout << "Angle: " << ret_angle() << "\n";
}

/*........................Class Obtuse triangle........................*/


/*.............................Class Square............................*/

Square::Square(int new_line, int new_angle, int a) : Flat_shape(new_line)
{
	x = a;
	angle = new_angle;
}

int Square::ret_x()
{
	return x;
}

int Square::ret_angle()
{
	return angle;
}

void Square::input()
{
	cout << "Data entry for a ";
	cout << "Square\n";
	cout << "Side a: ";
	cin >> x;
	angle = 90;
	line = 4;
	system("cls");
}

void Square::draw()
{
	cout << "\nSquare:" << "\nNumber of lines: " << get_line() << "\n" << "Side a: " << ret_x() << "\n" << "Angle: " << ret_angle() << "\n";
}

/*.............................Class Square............................*/

Rectangle::Rectangle(int new_line, int new_angle, int a, int b) : Square(new_line, new_angle, a), Flat_shape(new_line)
{
	y = b;
};

int Rectangle::ret_y()
{
	return y;
}

void Rectangle::input()
{
	cout << "Data entry for a ";
	cout << "Rectangle\n";
	cout << "Side a: ";
	cin >> x;
	cout << "Side b: ";
	cin >> y;
	angle = 90;
	line = 4;
	system("cls");
}

void Rectangle::draw()
{

	cout << "\nRectangle:" << "\nNumber of lines: " << get_line() << "\n" << "Side a: " << ret_x() << "\n" << "Side b: " << ret_y() << "\n" << "Angle: " << ret_angle() << "\n";
}