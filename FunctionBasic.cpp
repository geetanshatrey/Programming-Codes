#include<iostream>

using namespace std;

int add(int,int);

int main()
{
    int a,b,sum;
    cout<<"Enter 2 numbers : "<<endl;
    cin>>a>>b;
    sum=add(a,b);
    cout<<"Sum : "<<sum;
    return 0;
}

int add(int x,int y)
{
    return x+y;
}
