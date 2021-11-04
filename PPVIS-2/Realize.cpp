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

void Triangle::draw2()
{
	cout << "Triangle:\t\t\t\t\t| |\t\t\n" << "Number of lines: " << get_line() << "\t\t\t\t| |\t\t\n" << "Side a: " << ret_x() << "\t\t\t\t\t| |\t\t\n" << "Side b: " << ret_y() << "\t\t\t\t\t| |\t\t\n" << "Side c: " << ret_z() << "\t\t\t\t\t\n";
}

/*...........................Class Triangle............................*/


/*........................Class Right triangle.........................*/

Right_triangle::Right_triangle(int new_angle, int new_line, int a, int b, int c) : Triangle(new_line, a, b, c)
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

void Right_triangle::draw2()
{
	cout << "Right Triangle:\t\t|\t|\n" << "Number of lines: " << get_line() << "\t|\t|\n" << "Side a: " << ret_x() << "\t\t|\t|\n" << "Side b: " << ret_y() << "\t\t|\t|\n" << "Side c: " << ret_z() << "\t\t|\t|\n" << "Angle: " << ret_angle() << "\t\t|\t|\n";
}

/*........................Class Right triangle.........................*/


/*........................Class Acute triangle.........................*/

Acute_triangle::Acute_triangle(int new_angle, int new_line, int a, int b, int c, int new_angle2, int new_angle3) : Right_triangle(new_angle, new_line, a, b, c)
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

void Acute_triangle::draw2()
{
	cout << "Acute Triangle:\t\t|\t|\n" << "Number of lines: " << get_line() << "\t|\t|\n" << "Side a: " << ret_x() << "\t\t|\t|\n" << "Side b: " << ret_y() << "\t\t|\t|\n" << "Side c: " << ret_z() << "\t\t|\t|\n" << "Angle 1: " << ret_angle() << "\t\t|\t|\n" << "Angle 2: " << ret_angle2() << "\t\t|\t|\n" << "Angle 3: " << ret_angle3() << "\t\t|\t|\n";
}

/*........................Class Acute triangle.........................*/


/*........................Class Obtuse triangle........................*/


Obtuse_triangle::Obtuse_triangle(int new_angle, int new_line, int a, int b, int c) : Right_triangle(new_angle, new_line, a, b, c)
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

void Obtuse_triangle::draw2()
{
	
	cout << "Obtuse Triangle:\n" << "Number of lines: " << get_line() << "\n" << "Side a: " << ret_x() << "\n" << "Side b: " << ret_y() << "\n" << "Side c: " << ret_z() << "\n" << "Angle 1: " << ret_angle() << "\n";
}

/*........................Class Obtuse triangle........................*/


/*.............................Class Square............................*/

Square::Square(int new_line, int new_angle, int a) : Flat_shape(new_line)
{
	x1 = a;
	angle1 = new_angle;
}

int Square::ret_x1()
{
	return x1;
}

int Square::ret_angle1()
{
	return angle1;
}

void Square::input()
{
	cout << "Data entry for a ";
	cout << "Square\n";
	cout << "Side a: ";
	cin >> x1;
	angle1 = 90;
	line = 4;
	system("cls");
}

void Square::draw()
{
	cout << "\nSquare:" << "\nNumber of lines: " << get_line() << "\n" << "Side a: " << ret_x1() << "\n" << "Angle: " << ret_angle1() << "\n";
}

void Square::draw2()
{
	cout << "  |\t\t\t\t|\t\t| |<-----4----Square:" << "\n  |\t\t\t\t|\t\t| |\t     Number of lines: " << get_line() << "\n" << "  |\t\t\t\t|\t\t| |\t     Side a: " << ret_x1() << "\n" << "  |\t\t\t\t|\t\t| |\t     Angle: " << ret_angle1() << "\n";
}



/*.............................Class Square............................*/


/*............................Class Rectangle..........................*/

Rectangle::Rectangle(int new_line, int new_angle, int a, int b) : Flat_shape(new_line)
{
	y = b;
};

int Rectangle::ret_y()
{
	return y;
}

int Rectangle::ret_x()
{
	return x;
}

int Rectangle::ret_angle()
{
	return angle;
}

void Rectangle::input()
{
	cout << "Data entry for a ";
	cout << "Rectangle\n";
	cout << "Side a: ";
	cin >> x;
	do {
		cout << "Side b: ";
		cin >> y;
	} while (y==x);
	angle = 90;
	line = 4;
	system("cls");
}

void Rectangle::draw()
{
	cout << "\nRectangle:" << "\nNumber of lines: " << get_line() << "\n" << "Side a: " << ret_x() << "\n" << "Side b: " << ret_y() << "\n" << "Angle: " << ret_angle() << "\n";
}

void Rectangle::draw2()
{
	cout << "  |---------1---------->\t|\t\t| |\t     Rectangle:" << "\n  |\t\t\t|\t|\t\t| |\t     Number of lines: " << get_line() << "\n" << "  |\t\t\t|\t|\t\t| |\t     Side a: " << ret_x() << "\n" << "  |\t\t\t|\t|\t\t| |\t     Side b: " << ret_y() << "\n" << "  |\t\t\t|\t|\t\t| |\t     Angle: " << ret_angle() << "\n";
}

/*............................Class Rectangle..........................*/


/*.............................Class Rhombus...........................*/

Parallelogram::Parallelogram(int new_line, int new_angle, int new_angle2, int a, int b) : Square(new_line, new_angle, a), Rectangle(new_line, new_angle, a, b)
{
	angle2 = new_angle2;
}

int Parallelogram::ret_angle2()
{
		return angle2;
}

void Parallelogram::input()
{
	
	cout << "Data entry for a ";
	cout << "Parallelogram\n";
	cout << "Side a: ";
	cin >> x;
	cout << "Side b: ";
	cin >> y;
	angle = 30;
	angle2 = 60;
	line = 4;
	system("cls");
	
}

void Parallelogram::draw()
{
	cout << "\nParallelogram:" << "\nNumber of lines: " << get_line() << "\n" << "Side a: " << ret_x() << "\n" << "Side b: " << ret_y() << "\n" << "Angle 1: " << ret_angle() << "\n" << "Angle 2: " << ret_angle2() << "\n";
}

void Parallelogram::draw2()
{
	cout << "  |\t\t\t|\t|\t     Parallelogram:" << "\n  |\t\t\t|\t|\t     Number of lines: " << get_line() << "\n" << "  |\t\t\t|\t|\t     Side a: " << ret_x() << "\n" << "  |\t\t\t|\t|\t     Angle 1: " << ret_angle() << "\n" << "  |\t\t\t|\t|\t     Angle 2: " << ret_angle2() << "\n";
}

/*.............................Class Rhombus...........................*/