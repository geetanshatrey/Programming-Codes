#include<iostream>
using namespace std;

template<class T>

void showMaxMin(T x[],T y)
{
	int f=0,i;
	for(i=0;i<4;i++)
	{
		if(x[i]==y)
		{
			f=1;
			break;
		}
	}
	if(f==1)
		cout<<"\nFound at position : "<<i+1;
	else
		cout<<"\nNot Found !";
}
int main()
{
	int a[5],i,ih;
	float b[5],fh;
	cout<<"Enter INTEGER ARRAY : \n";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter the number to be searched linearly : ";
	cin>>ih;
	showMaxMin(a,ih);
	cout<<"\nEnter FLOAT ARRAY : \n";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
	}
	cout<<"\nEnter the number to be searched linearly : ";
	cin>>fh;
	showMaxMin(b,fh);
}
