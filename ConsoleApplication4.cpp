#include<iostream>
#include "Header.h"
int main()
{
	for4angles::Quadrangle a;
	a.input();
	a.Show();

	for4angles::Rectangle b;
	b.input();
	b.Show(); 

	for4angles::Rhombus c;
	c.input();
	c.Show();

	for4angles::Square d;
	d.input(); 
	d.Show(); 

	for3angles::Triangle e;
	e.input(); 
	e.Show(); 

	for3angles::Right_triangle f;

	for3angles::Equilateral_triangle g; 
}