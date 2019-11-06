#include<iostream>
using namespace std;

class A
{
    protected:
        int x;
    public:
        virtual void fun()=0;
        A(int i)
        {
            x=i;
        }
};
class B : public A
{
    int y;
    public:
    B(int i,int j): A(i)
    {
        y=j;
    }
    void fun()
    {
        cout<<x<<endl<<y;
    }
};
int main()
{
    B b(4,5);
    b.fun();
}
