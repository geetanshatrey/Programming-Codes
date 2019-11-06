#include<iostream>

using namespace std;

void divide(double x,double y)
{
    cout<<"\nIn divide()"<<endl;
    try
    {
        if(y==0.0)
            throw y;
        else
            cout<<"Division: "<<x/y<<endl;
    }
    catch(double)
    {
        cout<<"Caught double inside divide()"<<endl;
        throw;
    }
    cout<<"End of divide()"<<endl;
}

int main()
{
    cout<<"Inside main()"<<endl;
    try
    {
        divide(10.5,2.0);
        divide(20.0,0.0);
    }
    catch(double)
    {
        cout<<"Caught double inside main()"<<endl;
    }
    return 0;
}
