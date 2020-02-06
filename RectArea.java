class Rectangle
{
	int L,B;
	Rectangle(int l,int b)
	{
		L=l;
		B=b;
	}
	void display()
	{
		int area=L*B;
		System.out.println("Area of Rectangle: \n"+area);
	}
};
class RectArea
{
	public static void main(String x[])
	{
		int l=10,b=20;
		Rectangle sh=new Rectangle(l,b);
		sh.display();

	}
};