class Circle
{
	double R;
	Circle(double r)
	{
		R=r;
	}
	void display()
	{
		double area=3.14*R*R;
		System.out.println("Area of Circle: \n"+area);
	}
};
class CircArea
{
	public static void main(String x[])
	{
		double r=5.6;
		Circle sh=new Circle(r);
		sh.display();

	}
};