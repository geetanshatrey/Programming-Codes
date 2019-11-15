#include<iostream>
#include<string.h>

using namespace std;

class Demo
{
    char *name;
    public:
        Demo(char n[])
        {
            name=new char[30];
            strcpy(name,n);
        }
        Demo()
        {
            name=new char[30];
        }
        Demo operator +(Demo d2)
        {
            Demo d1;
            strcat(this->name,d2.name);
            strcpy(d1.name,this->name);
            cout<<"NAME : "<<d1.name;
        }
};
int main()
{
    Demo d1("Geetansh "),d2("Atrey");
    Demo d3;
    d3=d1+d2;
}
