#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"\nEnter 3 numbers (a,b,c) : ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
            cout<<"Greatest No : a : "<<a;
        else if(a==c)
            cout<<"Greatest No : a&c are equal : "<<a;
        else
            cout<<"Greatest No : c : "<<c;
    }
    else if(b>a)
    {
        if(b>c)
            cout<<"Greatest No : b : "<<b;
        else if(b==c)
            cout<<"Greatest No : b&c are equal : "<<b;
        else
            cout<<"Greatest No : c : "<<c;
    }
    else
    {
        if(b>c)
            cout<<"Greatest No : a&b are equal : "<<a;
        else if(b==c)
            cout<<"Greatest No : a&b&c are equal : "<<b;
        else
            cout<<"Greatest No : c : "<<c;
    }
    return 0;
}
