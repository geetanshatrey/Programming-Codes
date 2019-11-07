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
        Time operator +(int sec)
        {
            Time t;
            t.second=this->second+sec;
            t.minute=this->minute+t.second/60;
            t.second=t.second%60;
            t.hour=this->hour+t.minute/60;
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
    t3=t1+30;
    t3.display();
}
