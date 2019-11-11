#include<iostream>

using namespace std;

int main()
{
    char name[]="Geetansh";
    char *p;
    p=name;
    while(*p!='\0')
    {
        cout<<*p;
        p++;
    }
}
