#include<iostream>
#include "Flat_geom_shape.h"


int main()
{
	Triangle ABC;

	Right_triangle GPA;

	Acute_triangle PPA;

	Obtuse_triangle GLK;

	Square ABCD;

	Rectangle GPLN;


	ABC.input();

	GPA.input();

	PPA.input();

	GLK.input();

	ABCD.input();

	GPLN.input();
	

	ABC.draw();

	GPA.draw();

	PPA.draw();

	GLK.draw();

	ABCD.draw();

	GPLN.draw();

/*
cout << "\t\tFlat_shape\n";
cout << "\t\t    |\n" <<
		"\t\t    |\n" <<
		"\t\t    |\n" <<
		"\t\t    |\n" <<
		"\t\t    |\n" <<
		"  -----------------------------------\n" <<
		"  |\t\t\t\t|\n" <<
		"  |\t\t\t\t|\n" <<
		"  |\t\t\t\t|\n" <<
		"  |\t\t\t\t|\n" <<
		"  |\t\t\t\t|\n" <<
		"  |\t\t\t\t|\n"; 
           ABC.draw();
cout << "  |---------1---------->|\t\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |<--------2------------------ |\n" <<
	    "  |\t\t\t|\t|\n" ; GPA.draw();
  cout<<"  |---------3---------->|\t\n" 
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |<-------1+2----------|<------|\n"; PPA.draw();
cout<<  "  |\t\t\t|\t|\n" <<
        "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |<-------1+2+3--------|<------|\n"; GLK.draw();
		*/
}