#include "Header.h"
#include <iostream>

Figure::Figure()
{
	this->count_of_angles = 0;
	std::cout << "Constructor Figure" << std::endl;
}

namespace for4angles
{
	Quadrangle::Quadrangle() : Figure()
	{
		this->count_of_angles = 4;
		std::cout << "Constuctor Quadrangle" << std::endl;
		this->side_a = this->side_b = this->side_c = this->side_d = 0;
		this->angle_a = this->angle_b = this->angle_c = this->angle_d = 0;
	}
	void Quadrangle::input()
	{
		std::cout << "Do you want to create new quadratangle? Y/N" << std::endl;
		char a;
		std::cin >> a;
		if (a == 'Y')
		{
			std::cout << "You need to enter 4 sides. Enter the 1 side:" << std::endl;
			std::cin >> this->side_a;
			std::cout << "Enter the 2 side:" << std::endl;
			std::cin >> this->side_b;
			std::cout << "Enter the 3 side:" << std::endl;
			std::cin >> this->side_c;
			std::cout << "Enter the 4 side:" << std::endl;
			std::cin >> this->side_d;
			std::cout << "Now you need to ender 3 angles:" << std::endl << " Enter the 1 angle: " << std::endl;
			std::cin >> this->angle_a;
			std::cout << "Enter the 2 angle: " << std::endl;
			std::cin >> this->angle_b;
			std::cout << "Enter the 3 angle: \n";
			std::cin >> this->angle_c;
			this->angle_d = 180 - (this->angle_a + this->angle_b + this->angle_c);
		}
	}
	void Quadrangle::Show()
	{
		if (side_a != 0)
		{
			std::cout << "Quadrangle, " << this->count_of_angles << "angles" << std::endl;
			std::cout << "\nsides: " << this->side_a << " ," << this->side_b << " ," << this->side_c << " ," << this->side_d << std::endl;
			std::cout << "Angles: " << this->angle_a << " ," << this->angle_b << " ," << this->angle_c << " ," << this->angle_d << std::endl;
			std::cout << "Perimetr: " << Perimetr() << "\n";
		}
	}
	int Quadrangle::Perimetr()
	{
		return this->side_a + this->side_b + this->side_c + this->side_d;
	}

	Rectangle::Rectangle() : Quadrangle()
	{
		std::cout << "Constructor Recrangle" << std::endl;
	}
	void Rectangle::input()
	{
		std::cout << "Do you want to create new rectangle? Y/N" << std::endl;
		char a;
		std::cin >> a;
		if (a == 'Y')
		{
			std::cout << "You need to enter 2 sides. " << std::endl << "Enter the 1 side:" << std::endl;
			std::cin >> this->side_a;
			std::cout << "Enter the 2 side:" << std::endl;
			std::cin >> this->side_b;
			this->side_c = this->side_a;
			this->side_d = this->side_b;
			Rectangle::Make_angles();
		}
	}
	void Rectangle::Make_angles()
	{
		this->angle_d = this->angle_a = this->angle_b = this->angle_c = 90;
	}

	Rhombus::Rhombus() : Quadrangle()
	{
		std::cout << "Constructor Rhombus" << std::endl;
	}
	void Rhombus::input()
	{
		std::cout << "Do you want to create new rhombus? Y/N" << std::endl;
		char a;
		std::cin >> a;
		if (a == 'Y')
		{
			std::cout << "You need to enter 1 side. " << std::endl << "Enter the 1 side:" << std::endl;
			std::cin >> this->side_a;
			std::cout << "You need to enter 1 angle. " << std::endl << "Enter the 1 angle:" << std::endl;
			std::cin >> this->angle_a;
			this->angle_b = 180 - this->angle_a;
			this->angle_c = this->angle_a;
			this->angle_d = this->angle_b;
			Rhombus::Make_sides();
		}
	}
	void Rhombus::Make_sides()
	{
		this->side_c = this->side_d = this->side_b = this->side_a;
	}

	void Square::input()
	{
		std::cout << "Do you want to create new square? Y/N" << std::endl;
		char a;
		std::cin >> a;
		if (a == 'Y')
		{
			std::cout << "You need to enter 1 side. \nEnter the 1 side:";
			std::cin >> this->side_a;
		}
		Square::Make_angles();
		Square::Make_sides();
	}
}


namespace for3angles 
{
	Triangle::Triangle() : Figure()
	{
		this->count_of_angles = 3;
		std::cout << "Constuctor Triangle" << std::endl;
		this->side_a = this->side_b = this->side_c = 0;
		this->angle_a = this->angle_b = this->angle_c = 0;
	}

	void Triangle::input()
	{
		std::cout << "Do you want to create new simple triangle? Y/N" << std::endl;
		char a;
		std::cin >> a;
		if (a == 'Y')
		{
			std::cout << "You need to enter 3 sides. Enter the 1 side:" << std::endl;
			std::cin >> this->side_a;
			std::cout << "Enter the 2 side:" << std::endl;
			std::cin >> this->side_b;
			std::cout << "Enter the 3 side:" << std::endl;
			std::cin >> this->side_c;
			std::cout << "Now you need to ender 2 angles:" << std::endl << " Enter the 1 angle: " << std::endl;
			std::cin >> this->angle_a;
			std::cout << "Enter the 2 angle: " << std::endl;
			std::cin >> this->angle_b;
			this->angle_c = 180 - (this->angle_a + this->angle_b);
		}
	}
	void Triangle::Show()
	{
		if (side_a != 0)
		{
			std::cout << "Triangle, " << this->count_of_angles << "angles" << std::endl; 
			std::cout << "\nsides: " << this->side_a << " ," << this->side_b << " ," << this->side_c << std::endl;
			std::cout << "Angles: " << this->angle_a << " ," << this->angle_b << " ," << this->angle_c << std::endl;
			std::cout << "Perimetr: " << Perimetr() << "\n";
		}
	}
	int Triangle::Perimetr()
	{
		return this->side_a + this->side_b + this->side_c;

	}

	Right_triangle::Right_triangle() : Triangle()
	{
		Right_triangle::input();
		Right_triangle::Show();
	}
	void Right_triangle::input()
	{
		std::cout << "Do you want to create new right triangle? Y/N" << std::endl;
		char a;
		std::cin >> a;
		if (a == 'Y')
		{
			std::cout << "You need to enter 2 sides. Enter the 1 katet:" << std::endl;
			std::cin >> this->side_a;
			std::cout << "Enter the 2 katet:" << std::endl;
			std::cin >> this->side_b;
			this->side_c= pow(pow(this->side_a,2)+pow(this->side_b,2),0.5);
			std::cout << "Now you need to ender 1 angle:" << std::endl << " Enter the 1 angle(less than 90): " << std::endl;
			std::cin >> this->angle_a;
			this->angle_b = 90 - angle_a; 
			this->angle_c = 90; 
		}
	}
	
	Equilateral_triangle:: Equilateral_triangle() : Triangle()
	{
		Equilateral_triangle::input(); 
		Equilateral_triangle::Show(); 
	}

	void Equilateral_triangle::input()
	{
		std::cout << "Do you want to create new Equilateral triangle? Y/N" << std::endl;
		char a;
		std::cin >> a;
		if (a == 'Y')
		{
			std::cout << "You need to enter 1 side. Enter:" << std::endl;
			std::cin >> this->side_a;
			this->side_b = this->side_c = this->side_a;
			this->angle_a = this->angle_b = this->angle_c = 60;
		}
	}
}
