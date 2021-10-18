
/*..........................Class Flat_shape...........................*/

class Flat_shape 
{
public:
	Flat_shape(int new_line = 0);
    
	int get_line();
	
	virtual void input() = 0;

	virtual void draw() = 0;

	virtual void draw2() = 0;

protected:
	int line;
};

/*..........................Class Flat_shape...........................*/


/*...........................Class Triangle............................*/

class Triangle : virtual private Flat_shape
{
public:
	Triangle(int new_line = 0, int a = 0, int b = 0, int c = 0);

	int ret_x();

	int ret_y();

	int ret_z();

	void input();

	void draw();

	void draw2();

protected:
	int x, y, z;
};

/*...........................Class Triangle............................*/


/*........................Class Right triangle.........................*/

class Right_triangle : virtual public Triangle, virtual private Flat_shape
{
public:
	Right_triangle(int new_angle = 0, int new_line = 0, int a = 0, int b = 0, int c = 0);

	int ret_angle();

	void input();

	void draw();

	void draw2();

protected:
	 int angle;
};

/*........................Class Right triangle.........................*/


/*........................Class Acute triangle.........................*/

class Acute_triangle : public Right_triangle, virtual public Triangle, virtual public Flat_shape
{
public:
	Acute_triangle(int new_angle = 0, int new_line = 0, int a = 0, int b = 0, int c = 0, int new_angle2 = 0, int new_angle3 = 0);

	int ret_angle2();

	int ret_angle3();

	void input();

	void draw();

	void draw2();

private:
	int angle2, angle3;
};

/*........................Class Acute triangle.........................*/


/*........................Class Obtuse triangle........................*/

class Obtuse_triangle : public Right_triangle, virtual public Triangle, virtual public Flat_shape
{
public:
	Obtuse_triangle(int new_angle = 0, int new_line = 0, int a = 0, int b = 0, int c = 0);

	void input();

	void draw();

	void draw2();

};

/*........................Class Obtuse triangle........................*/


/*.............................Class Square............................*/
namespace Class_Square {

	class Square : virtual public Flat_shape
	{
	public:
		Square(int new_line = 0, int new_angle = 0, int a = 0);

		int ret_x();

		int ret_angle();

		void input();

		void draw();

		void draw2();

	protected:
		int x, angle;
	};

}

/*.............................Class Square............................*/


/*............................Class Rectangle..........................*/

using Class_Square::Square;

class Rectangle : public Square, virtual public Flat_shape
{
public:
	Rectangle(int new_line = 0, int new_angle = 0, int a = 0, int b = 0);

	int ret_y();

	void input();

	void draw();

	void draw2();

private:
	int y;
};

/*............................Class Rectangle..........................*/


/*.............................Class Rhombus...........................*/

class Rhombus : virtual public Square, virtual public Flat_shape
{
public:
	Rhombus(int new_line = 0, int new_angle = 0, int new_angle2 = 0 , int a = 0);

	int ret_angle2();

	void input();

	void draw();

	void draw2();

protected:
	int angle2;
};

/*.............................Class Rhombus...........................*/