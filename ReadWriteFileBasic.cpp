#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream x("Information");
    char name[10];
    int age;
    cin>>name>>age;
    x<<name<<endl;
    x<<age;
    x.close();
    ifstream y("Information");
    y>>name;
    y>>age;
    cout<<"Name: "<<name<<endl<<"Age: "<<age;
    y.close();
}
