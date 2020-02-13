abstract class Area
{
	abstract void area();	
}

class Triangle extends Area
{
	int b = 10, h = 20;
	public void area()
	{
	System.out.println("Area of Triangle : "+(0.5*b*h));	
	}
} 
class Square extends Area
{
	int side=10;
	
	public void area()
	{
		System.out.println("Area of Triangle : "+(side*side));	
	}		
} 
class Rectangle extends Area
{
	int l = 5, b = 10;
	
	public void area()
	{
		System.out.println("Area of Triangle : "+(l*b));	
	}		
} 

class Abstract
{
	public static void main(String x[])
	{
		Triangle ob1 = new Triangle();
		Square ob2 = new Square();
		Rectangle ob3 = new Rectangle();
		ob1.area();
		ob2.area();
		ob3.area();
	}

}

