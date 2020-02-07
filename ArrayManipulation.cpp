#include<iostream>
using namespace std;
int main()
{
        long long int n,m,x,y,z,i,j,temp;
        cin>>n>>m;
        long long int *a=new long long int[n];
        for(i=0;i<n;i++)
        {
            a[i]=0;
        }
        for(i=0;i<m;i++)
        {
            cin>>x>>y>>z;
            for(j=x-1;j<y;j++)
            {
                a[j]=a[j]+z;
            }
        }
        for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
        }
    }
        cout<<a[0];
        return 0;
}
