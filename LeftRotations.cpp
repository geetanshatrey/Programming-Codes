@@ -1,32 +0,0 @@
#include<iostream>
using namespace std;
int main()
{
    long int n,d,temp;
    cin>>n>>d;
    long int *a=new long int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<d;j++)
    {
       for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                temp=a[0];
            }
            if(i<n-1)
            {
                a[i]=a[i+1];
            }
            else
                a[i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
