import java.util.*;

class WhileLoops
{
	public static void main(String x[])
	{
		Scanner ob1=new Scanner(System.in);
		int n,i=1;
		System.out.print("Enter a number :");
		n=ob1.nextInt();
		while(i<=n)
		{
			System.out.println(i);
			i++;
		}
	}
}
