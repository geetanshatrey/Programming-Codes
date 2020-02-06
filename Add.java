class OverloadSum
{
	int swapValue(int a,int b)
	{
		int c;
		c=a+b;
		return c;
	}
	int swapValue(int a,int b,int c)
	{
		int d;
		d=a+b+c;
		return d;
	}
	int swapValue(int a,int b,int c,int d)
	{
		int e;
		e=a+b+c+d;
		return e;
	}
};
class Add
{
	public static void main(String args[])
		{
			int a=2,b=4,c=10,d=20;
			OverloadSum obj=new OverloadSum();
			System.out.println("Added: \t\n"+obj.swapValue(a,b));
			System.out.println("Added: \t\n"+obj.swapValue(a,b,c));
			System.out.println("Added: \t\n"+obj.swapValue(a,b,c,d));
	}
};