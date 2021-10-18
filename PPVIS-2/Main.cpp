#include<iostream>
#include "Flat_geom_shape.h"


int main()
{
	using namespace std;

	Triangle ABC;

	Right_triangle GPA;

	Acute_triangle PPA;

	Obtuse_triangle GLK;

	Square ABCD;

	Rectangle GPLN;

	Rhombus PLKM;

	

	ABC.input();

	GPA.input();

	Triangle* Shape = &PPA;

	Shape->input();//PPA.input();

	GLK.input();

	ABCD.input();

	GPLN.input();

	PLKM.input();


	ABC.draw();

	GPA.draw();

	PPA.draw();

	GLK.draw();

	ABCD.draw();

	GPLN.draw();

	PLKM.draw();

/*
cout << "\t\tFlat_shape\n";
cout << "\t\t    |\n" <<
		"\t\t    |\n" <<
		"\t\t    |\n" <<
		"\t\t    |\n" <<
		"\t\t    |\n" <<
		"  ----------------------------------------------------------------------------\n" <<
		"  |\t\t\t\t|\t\t|\t\t|\n" <<
		"  |\t\t\t\t|\t\t|\t\t|\n" <<
		"  |\t\t\t\t|\t\t|\t\t|\n" <<
		"  |\t\t\t\t|\t\t|\t\t|\n" <<
		"  |\t\t\t\t|\t\t|\t\t|\n" <<
		"  |\t\t\t\t|\t\t|\t\t|\n"; ABCD.draw2();
ABC.draw2(); GPLN.draw2(); PLKM.draw2();
cout << "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |<--------2------------------ |\n" <<  
	    "  |\t\t\t|\t|\n" ; GPA.draw2(); 
  cout<<"  |---------3---------->|\t|\n" 
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |<-------1+2----------|<------|\n"; PPA.draw2();
cout<<  "  |\t\t\t|\t|\n" <<
        "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |\t\t\t|\t|\n" <<
	    "  |<-------1+2+3--------|<------|\n"; GLK.draw2();
*/		
}