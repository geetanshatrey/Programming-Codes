#include<iostream>

using namespace std;

int main()
{
	float a,b;
	try
	{
		cout<<"Enter the value of the no to be divided: ";
		cin>>a;
		cout<<"Enter the value of the no to be divided with: ";
		cin>>b;
		if(b!=0)
			cout<<endl<<"The result is :"<<a/b;
			
		else
			throw b;
	}
	catch(float b)
	{
		cout<<endl<<"EXCEPTION ! DIVISION BY 0";
	}
}
