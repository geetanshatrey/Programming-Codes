#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char *in;
    ifstream x("Text");
    while(!x.eof())
    {
        x>>in;
        cout<<*in<<" ";
    }
    x.close();
}
