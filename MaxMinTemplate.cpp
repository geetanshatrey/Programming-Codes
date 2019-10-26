#include<iostream>
using namespace std;

template<class T>

void showMaxMin(T x[])
{
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(x[j]<x[i])
			{
				T c;
				c=x[i];
				x[i]=x[j];
				x[j]=c;
			}
		}
	}
	cout<<"\nMAXIMUM : "<<x[4];
	cout<<"\nMINIMUM : "<<x[0];
	
}
int main()
{
	int a[5],i;
	float b[5];
	cout<<"Enter INTEGER ARRAY : \n";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	showMaxMin(a);
	cout<<"\nEnter FLOAT ARRAY : \n";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
	}
	showMaxMin(b);
}
