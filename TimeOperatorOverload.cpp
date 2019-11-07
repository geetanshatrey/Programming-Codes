#include<iostream>

using namespace std;

class Time
{
    int hour,minute,second;
    public:
        Time(int h,int m,int s)
        {
            hour=h;
            minute=m;
            second=s;
        }
        Time()
        {}
        friend Time operator +(Time t1)
        {
            Time t;
            t.second=t1.second+30;
            t.minute=t1.minute+t.second/60;
            t.second=t.second%60;
            t.hour=t1.hour+t.minute/60;
            t.minute=t.minute%60;
            return t;
        }
        void display()
        {
            cout<<"Hours:"<<hour<<" Minutes:"<<minute<<" Seconds:"<<second;
        }
};
int main()
{
    Time t1(10,20,30);
    Time t3;
    t3=30+t1;
    t3.display();
}
