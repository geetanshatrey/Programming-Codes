class Overload
{
	void swapValue(String a,String b)
	{
		String c;
		c=a;
		a=b;
		b=c;
	}
	void swapValue(int a,int b)
	{
		int c;
		c=a;
		a=b;
		b=c;
	}
	void swapValue(float a,float b)
	{
		float c;
		c=a;
		a=b;
		b=c;
	}
};
class Swap
{
	public static void main(String args[])
		{
			String a="Hello World",b="HELLO WORLD";
			int c=10,d=20;
			float e=5.8f,f=2.6f;
			Overload obj=new Overload();
			obj.swapValue(a,b);
			obj.swapValue(c,d);
			obj.swapValue(e,f);
			System.out.println("Swapped: \t\n"+a+"\n"+b);
			System.out.println("Swapped: \t\n"+c+"\n"+d);
			System.out.println("Swapped: \t\n"+e+"\n"+f);

	}
};