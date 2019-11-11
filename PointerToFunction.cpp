#include<iostream>
using namespace std;

void fun(int x)
{
    cout<<x;
}
int main()
{
    void(*fun_ptr)(int)=&fun;
    (*fun_ptr)(10);
}
