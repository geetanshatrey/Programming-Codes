#include<iostream>

using namespace std;

int main()
{
	int n,x;
	cout<<"\nEnter the size of array :";
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{	
		cout<<"Enter the value of a["<<i<<"]: ";
		cin>>a[i];
	}
	cout<<"\nEnter the index to be searched for : ";
	cin>>x;
	try
	{
			if(x>=0&&x<n)
				cout<<endl<<"Found! Number : "<<x;
			else
				throw x;
	}
	catch(int x)
	{
			cout<<endl<<"ARRAY OUT OF BOUNDS EXCEPTION ! ";
	}

}
