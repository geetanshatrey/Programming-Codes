class Shape
{
	void areaShape(int l,int b)
	{
		int area=l*b;
		System.out.println("Area of rectangle: "+area);
	}
	void areaShape(int l)
	{
			int area=l*l;
			System.out.println("Area of square : "+area);
	}
	void areaShape(double r)
	{
			double area=3.14*r*r;
			System.out.println("Area of circle: "+area);
	}
};
class ShowAreas
{
	public static void main(String x[])
	{
		int l=10,b=20;
		double r=6.7;
		Shape sh=new Shape();
		sh.areaShape(l,b);
		sh.areaShape(l);
		sh.areaShape(r);

	}
};