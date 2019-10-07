#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n,i;
    cin>>n;
    int *p=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<n;i++)
    {
        int dif=p[i]%6;
        switch(dif)
        {
            case 0:
                    if((p[i]/6)%2==0)
                    {
                        cout<<p[i]-11<<" WS"<<endl;
                    }
                    else
                    {
                        cout<<p[i]+1<<" WS"<<endl;
                    }
                    break;

            case 1:
                    if((p[i]/6)%2==0)
                    {
                        cout<<p[i]+11<<" WS"<<endl;
                    }
                    else
                    {
                        cout<<p[i]-1<<" WS"<<endl;
                    }
                    break;
            case 2:
                    if((p[i]/6)%2==0)
                    {
                        cout<<p[i]+9<<" MS"<<endl;
                    }
                    else
                    {
                        cout<<p[i]-3<<" MS"<<endl;
                    }
                    break;
            case 3:
                    if((p[i]/6)%2==0)
                    {
                        cout<<p[i]+7<<" AS"<<endl;
                    }
                    else
                    {
                        cout<<p[i]-5<<" AS"<<endl;
                    }
                    break;
            case 4:
                    if((p[i]/6)%2==0)
                    {
                        cout<<p[i]+5<<" AS"<<endl;
                    }
                    else
                    {
                        cout<<p[i]-7<<" AS"<<endl;
                    }
                    break;
            case 5:
                    if((p[i]/6)%2==0)
                    {
                        cout<<p[i]+3<<" MS"<<endl;
                    }
                    else
                    {
                        cout<<p[i]-9<<" MS"<<endl;
                    }
                    break;
            default:
                    break;
        }
    }
}
