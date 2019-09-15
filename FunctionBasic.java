import java.util.*;

class Addition
{
	int add(int x,int y)   
	{
		return x+y;
	}
}

class FunctionBasic
{
	public static void main(String x[])
	{
		Scanner ob1=new Scanner(System.in);
		Addition n1=new Addition();
		int a,b,sum;
		System.out.println("Enter 2 numbers :");
		a=ob1.nextInt();
		b=ob1.nextInt();
		sum=n1.add(a,b);
		System.out.println("\nSum : "+sum); 
	}
}

/*A method must always be a part of a class in Java, 
unlike C, C++, and Python. */


	


