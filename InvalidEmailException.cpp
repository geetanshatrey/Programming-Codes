#include<iostream>

using namespace std;

int main()
{
	char a[25];
	int f=0,i,j;
	cout<<"Enter the email :";
	cin>>a;
	try
	{
		for(i=0;i<25;i++)
		{
			if(a[i]=='@')
			{
				f=1;
				j=i+1;
				break;
			}	
		}
		if(f==1)
		{
			f=0;
			for(;j<25;j++)
			{
				if(a[j]=='.')
				{
					f=1;
					break;
					
				}
			}
			if(f==1)
			{
				if((j-i)>1&&(25-j)>1)
					cout<<"\nValid Email ! ";
				else
					throw a;
			}
			else
				throw a;
		}
		else
			throw a;
	}
	catch(char a[])
	{
		cout<<"\nINVALID EMAIL EXCEPTION !";
	}

}
