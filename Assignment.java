import java.util.*;

class Encrypt
{
    public void encryptMessage(String x)
	{
		int n,count=0;
		int xlen = x.length();
		if(xlen%6==0)
		{
			n=xlen/6;
		}
		else
		{
			n=(xlen/6)+1;
		}
		char message[][] = new char[n][6];
		for(int i=0;i<message.length;i++)
		{
			for(int j=0;j<6;j++)
			{
				if(count<xlen)
				{
					if(x.charAt(count)!=' ')
					{
						
						message[i][j]=x.charAt(count);
						
					}
					else
					{
						message[i][j]='*';
					}
					count++;
				}
				else
				{
					message[i][j]='.';
				}
			}
		}
		System.out.println("\nOutput: ");
		for(int j=0;j<6;j++)
		{
			for(int i=0;i<message.length;i++)
			{
				if(message[i][j]!='.')
					System.out.print(message[i][j]);
			}
		}
	}
}
class Assignment
{
	public static void main(String[] args)
	{
		Scanner ob1 = new Scanner(System.in);
		String x;
		System.out.print("Enter a message : ");
		x = ob1.nextLine();
		x=x.toUpperCase();
		Encrypt e = new Encrypt();
		e.encryptMessage(x);
	}
}

