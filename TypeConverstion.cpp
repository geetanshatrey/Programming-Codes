
#include<iostream>

using namespace std;

class Seconds
{
public:
    int s;
};
class Minutes
{
    int m;
    public:

    Minutes(int mm)
    {
        m=mm;
    }
    operator Seconds()
    {
        Seconds s1;
        s1.s=m*60;
        return s1;
    }
};
int main()
{
    Minutes m(75);
    Seconds s1;
    s1=m;
    cout<<s1.s;
}
