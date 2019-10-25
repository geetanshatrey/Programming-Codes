#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"\nEnter the size of array :";
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;)
	{	
		try
		{
			cout<<"Enter the value of a["<<i<<"]: ";
			cin>>a[i];
			if(a[i]>=0)
				i++;
			else
				throw a[i];
		}
		catch(int a)
		{
			cout<<endl<<"NEGATIVE NUMBER EXCEPTION ! Negative Number : "<<a<<endl<<endl;
		}
	}
	cout<<endl<<"Done Successfully :)";
}
