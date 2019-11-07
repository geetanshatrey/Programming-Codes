#include<iostream>

using namespace std;

void test(int x) throw (int,double)
{
    if(x==1)
        throw x;
    else
    if(x==-1)
        throw 1.0;
}
int main()
{
    try
    {
        cout<<"x==1";
        test(1);
        cout<<"x==-1";
        test(-1);
    }
    catch(char c)
    {
        cout<<"\n Caught char";
    }
    catch(int m)
    {
        cout<<"\n Caught int";
    }
    catch(double d)
    {
        cout<<"\n Caught double";
    }

}
