#include<iostream>

using namespace std;

class A
{
    protected:
        int x;
    public:
        A()
        {
            x=6;
        }
        virtual void fun()=0;

};
class B: public A
{
    int y;
    public :
        B()
        {
            y=5;
        }
        void fun()
        {
            cout<<x<<endl<<y;
        }

};
int main()
{
    A *ptr=new B();
    ptr->fun();
}
