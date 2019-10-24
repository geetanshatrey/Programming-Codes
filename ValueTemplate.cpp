#include<iostream>
using namespace std;

template<class A>

void getValue(A a)	
{
		cout<<"VALUE : "<<a;
}

int main()
{
	int a;
	cin>>a;
	getValue(a);
}
