#include<iostream>

using namespace std;

int main()
{   
    int i,t,n,j,c;
    cin>>t;
    cin>>n;
    for(i=0;i<t;i++)
    {
        int *p=new int[n];
        String a[n];
        for(j=0;j<n;j++)
        {
            c=0;
            cin>>a[j]>>p[j];
            for(int k=j-1;k>=0;k--)
            {
                if(a[k]==a[j])
                {
                    if(p[k]==p[j])
                    {
                        c++;
                    }
                }
                else
                {
                    c++;
                }
            }
            cout<<c;
        }
    }
}