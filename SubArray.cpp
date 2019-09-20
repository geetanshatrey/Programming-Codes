#include<iostream>

using namespace std;

int main()
{
    long int n,sum,i,s,f=0,k,j,temp;
    cin>>n;
    int *a=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>s>>sum;
        int *a=new int[s];
        for(j=0;j<s;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<s;j++)
        {
            temp=0;
            f=0;
            for(k=j;k<s;k++)
            {
                temp=temp+a[k];
                if(sum==temp)
                {
                    cout<<j+1<<" "<<k+1<<"\n";
                    f=1;
                    break;
                }

            }
            if(f==1)
                break;
        }
        if(f==0)
            cout<<"-1\n";
    }
    return 0;
}
