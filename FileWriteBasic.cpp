#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream x("Text");
    int ch[5]={1,2,3,4,5};
    int a[10],i;
    for(int i=0;i<5;i++)
    {
        x<<" "<<ch[i];
    }
    cout<<endl;
    x.close();
    ifstream y("Text");
    i=0;
   while(!y.eof())
    {
        y>>a[i];
        cout<<a[i]<<" ";
        i++;
    }
    y.close();
}
