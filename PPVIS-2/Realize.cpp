#include<iostream>
#include "Flat_geom_shape.h"

using namespace std;


/*..........................Class Flat_shape...........................*/

Flat_shape::Flat_shape(int new_line)
{
	line = new_line;
}

void Flat_shape::set_line(int nline)
{
	line = nline;
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

void Triangle::set_x(int nx)
{
	x = nx;
}

void Triangle::set_y(int ny)
{
	y = ny;
}

void Triangle::set_z(int nz)
{
	z = nz;
}

void::Triangle::input()
{
	int a,b,c;
	cout<<"Data entry for a ";
	cout << "triangle\n";
	set_line(3);
	cout << "Side a: ";
	cin >> a;
	set_x(a);
	cout << "Side b: ";
	cin >> b;
	set_y(b);
	cout << "Side c: ";
	cin >> c;
	set_z(c);
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

void Right_triangle::set_angle(int nangle)
{
	angle = nangle;
}

void::Right_triangle::input()
{
	int a, b, c;
	cout << "Data entry for a ";
	cout << "right triangle\n";
	set_angle(90);
	set_line(3);
	cout << "Side a: ";
	cin >> a;
	set_x(a);
	cout << "Side b: ";
	cin >> b;
	set_y(b);
	cout << "Side c: ";
	c = sqrt(a * a + b * b);
	set_z(c);
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

void Acute_triangle::set_angle2(int nangle2)
{
	angle2 = nangle2;
}

void Acute_triangle::set_angle3(int nangle3)
{
	angle3 = nangle3;
}

void::Acute_triangle::input()
{
	int a, b, c, ang1, ang2, ang3;
	cout << "Data entry for a ";
	cout << "acute triangle\n";

	do {
		cout << "Angle 1: ";
		cin >> ang1;
		set_angle(ang1);
	} while (ang1 >= 90);

	do {
		cout << "Angle 2: ";
		cin >> ang2;
		set_angle2(ang2);
	} while (ang2 >= 90);

	do {
		cout << "Angle 3: ";
		cin >> ang3;
		set_angle3(ang3);
	} while (ang3 >= 90);

	set_line(3);
	cout << "Side a: ";
	cin >> a;
	set_x(a);
	cout << "Side b: ";
	cin >> b;
	set_y(b);
	cout << "Side c: ";
	cin >> c;
	set_z(c);
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
	int a, b, c, ang;
	cout << "Data entry for a ";
	cout << "obtuse triangle\n";
	do {
		cout << "Angle: ";
		cin >> ang;
		set_angle(ang);
	} while (ang <= 90);
	set_line(3);
	cout << "Side a: ";
	cin >> a;
	set_x(a);
	cout << "Side b: ";
	cin >> b;
	set_y(b);
	do {
		cout << "Side c: ";
		cin >> c;
		set_z(c);
	} while (c<a+b);
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

int Square::ret_S()
{
	return S;
}

void Square::set_x1(int nx1)
{
	x1 = nx1;
}

void Square::set_angle1(int nangle1)
{
	angle1 = nangle1;
}

void Square::set_S(int nS)
{
	S = nS;
}

int Square::area(int a, int b) 
{
	return a * b;
}

void Square::input()
{
	int a,Sq;
	cout << "Data entry for a ";
	cout << "Square\n";
	cout << "Side a: ";
	cin >> a;
	set_x1(a);
	set_angle1(90);
	set_line(4);
	Sq = area(a, a);
	set_S(Sq);
	system("cls");
}

void Square::draw()
{
	cout << "\nSquare:" << "\nNumber of lines: " << get_line() << "\n" << "Side a: " << ret_x1() << "\n" << "Angle: " << ret_angle1() << "\n" << "Area: " << ret_S()<<"\n";
}

void Square::draw2()
{
	cout << "  |\t\t\t\t|\t\t| |<-----4----Square:" << "\n  |\t\t\t\t|\t\t| |\t     Number of lines: " << get_line() << "\n" << "  |\t\t\t\t|\t\t| |\t     Side a: " << ret_x1() << "\n" << "  |\t\t\t\t|\t\t| |\t     Angle: " << ret_angle1() << "\n";
}



/*.............................Class Square............................*/


/*............................Class Rectangle..........................*/

Rectangle::Rectangle(int new_line, int new_angle, int a, int b) : Flat_shape(new_line)
{
	x = a;
	y = b;
	angle = new_angle;
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

void Rectangle::set_x(int nx)
{
	x = nx;
}

void Rectangle::set_y(int ny)
{
	y = ny;
}

void Rectangle::set_angle(int nangle)
{
	angle = nangle;
}

void Rectangle::input()
{
	int a, b;
	cout << "Data entry for a ";
	cout << "Rectangle\n";
	cout << "Side a: ";
	cin >> a;
	set_x(a);
	do {
		cout << "Side b: ";
		cin >> b;
		set_y(b);
	} while (a==b);
	set_angle(90);
	set_line(4);
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

Parallelogram::Parallelogram(int new_line, int new_angle, int a, int b) : Square(new_line, new_angle, a), Rectangle(new_line, new_angle, a, b)
{
	
}

int Parallelogram::area(int a, int b)
{
	return a * b * 0.5;
}

void Parallelogram::input()
{
	int a, b, Sq;
	cout << "Data entry for a ";
	cout << "Parallelogram\n";
	cout << "Side a: ";
	cin >> a;
	set_x(a);
	cout << "Side b: ";
	cin >> b;
	set_y(b);
	Sq = area(a, b);
	set_S(Sq);
	set_angle1(30);
	set_angle(60);
	set_line(4);
	system("cls");
	
}

void Parallelogram::draw()
{
	cout << "\nParallelogram:" << "\nNumber of lines: " << get_line() << "\n" << "Side a: " << ret_x() << "\n" << "Side b: " << ret_y() << "\n" << "Angle 1: " << ret_angle1() << "\n" << "Angle 2: " << ret_angle() << "\n" << "Area: " << ret_S() << "\n";
}

void Parallelogram::draw2()
{
	cout << "  |\t\t\t|\t|\t     Parallelogram:" << "\n  |\t\t\t|\t|\t     Number of lines: " << get_line() << "\n" << "  |\t\t\t|\t|\t     Side a: " << ret_x() << "\n" << "  |\t\t\t|\t|\t     Angle 1: " << ret_angle1() << "\n" << "  |\t\t\t|\t|\t     Angle 2: " << ret_angle() << "\n";
}

/*.............................Class Rhombus...........................*/