#include<iostream>

using namespace std;

void f(int a,int b)
{
    bool b1=a==b;
    cout<<"Check if "<<a<<" is equal to "<<b<<": "<<bool(b1)<<endl;
}
bool great(int a,int b)
{
    return a>b;
}
void g()
{
    bool a=true;
    bool b=true;
    bool x=a+b; //a+b is 2. bool(non zero) is true.
    bool y=a-b; //a-b is 0. bool(zero) is false.
    cout<<"a+b is :"<<x<<endl;
    cout<<"a-b is :"<<y<<endl;
}
int main()
{
    cout<<"FOR A BOOL : 0 is FALSE AND 1 is TRUE !"<<endl;
    f(10,10);
    bool b=great(20,30);
    cout<<"If 20 is greater than 30 : "<<b<<endl;
    g();
}
