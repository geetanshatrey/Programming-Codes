#include<iostream>

using namespace std;

class A
{
    int x;
    public:
        A(int x)
        {
            this->x=x;
        }
        operator int()
        {
            int y;
            y=this->x;
            cout<<y;
            return y;
        }
};
int main()
{
    A a(5);
    int x;
    x=a;
}
