class Figure
{
public:
	Figure(); 
	virtual void input() = 0;
	virtual void Show() = 0; 
protected:
	int count_of_angles; 
	virtual int Perimetr() = 0;
};

namespace for4angles // пользователю доступны функции  show, input( для замены имеющихся значений). Наследование через public
{
	class Quadrangle : public Figure //четырехугольник
	{
	public:
		Quadrangle();
		void input() override;
		void Show() override;
	protected:
		int side_a;
		int side_b;
		int side_c;
		int side_d;
		int angle_a;
		int angle_b;
		int angle_c;
		int angle_d;
		int Perimetr() override;
	};

	class Rectangle : public virtual Quadrangle
	{
	public:
		Rectangle();
		void input() override;
		virtual void Make_angles();

	};

	class Rhombus :public virtual Quadrangle
	{
	public:
		Rhombus();
		void input() override;
		virtual void Make_sides();
	};

	class Square :public Rectangle, public Rhombus
	{
	public:
		void input() override;
	};
}

namespace for3angles //пользователю доступен ТОЛЬКО конструктор, наследование через private 
{
	class Triangle : public Figure
	{
	public:
		Triangle(); 
		void input() override;
		void Show() override; 
	protected:
		int Perimetr() override; 
		int side_a;
		int side_b;
		double side_c; 
		int angle_a;
		int angle_b;
		int angle_c; 
	};

	class Right_triangle : private Triangle
	{
	public:
		Right_triangle(); 
	private:
		void input() override;
	};

	class Equilateral_triangle : private Triangle
	{
	public:
		Equilateral_triangle();
	private:
		void input() override;
	};

}