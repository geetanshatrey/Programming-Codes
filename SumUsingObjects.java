class A
{
	int a;
	A(int x,int y)
	{
		a = x + y;	
	}
	A(A ob1,A ob2)
	{
		a = ob1.a + ob2.a;
	}
	void showA()
	{
		System.out.println("Value of a: "+a);
	}
}

class SumUsingObjects
{
	public static void main(String x[])
	{
		A ob1 = new A(10,20);
		ob1.showA();
		A ob2 = new A(5,10);
		ob2.showA();	
		A ob3 = new A(ob1,ob2);
		ob3.showA();
	}

}


