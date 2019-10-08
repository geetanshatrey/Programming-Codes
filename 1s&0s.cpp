#include<iostream>
using namespace std;
int main() 
{
	int a[4][5],i,j,f=0,ch[4];
	cout<<"Enter the elements : \n";
	for(i=0; i<4;i++)
	{	
		for(j=0;j<5;j++)
		{
			cout<<"Enter the element a["<<i<<"]["<<j<<"] : ";
			cin>>a[i][j];
			cout<<endl;
			if(a[i][j]!=0&&a[i][j]!=1)
			{
				cout<<"Wrong Input!!!";
				f=1;
			}
		}
	}
	if(f==0)
	{
		for(i=0;i<4;i++)
		{
			for(j=4;j>=0;j--)
			{
				if(a[i][j]==1)
				{
					ch[i]=4-j;
					break;
				}
			}
		}
		for(i=0; i<4;i++)
		{	
			for(j=0;j<5;j++)
			{
				cout<<" "<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
		for(i=0;i<4;i++)
		{
			cout<<"\nNo. of 0s after the last 1 in row "<<i+1<<" : "<<ch[i];
		}
		
	}
	return 0;
}
