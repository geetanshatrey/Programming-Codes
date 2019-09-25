import java.util.*;
class TwoDMatrix
{
	public static void main(String args[])
	{
		int a[][]={{11,22,33,44},{55,66},{77,88,99},{110,121}};
		int j,i;
		for(i=0;i<a.length;i++)
		{
			for(j=0;j<a[i].length;j++)
			{	
				System.out.println("\nElement a["+i+"]["+j+"]:  "+a[i][j]);	
			}
		}	
	}
}
