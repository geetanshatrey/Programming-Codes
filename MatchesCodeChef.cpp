#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,temp,siz;
    long int a,b,sum,i=0;
    cin>>t;
    siz=t;
    int final[t]={0};
    while(siz--)
    {
        cin>>a>>b;
        sum=a+b;
        while(sum>0)
        {
            temp=sum%10;
            switch(temp)
            {
                case 0:
                        final[i]=final[i] + 6;
                        sum=sum/10;
                        break;
                case 1:
                        final[i]=final[i] + 2;
                        sum=sum/10;
                        break;
                case 2:
                        final[i]=final[i] + 5;
                        sum=sum/10;
                        break;
                case 3:
                        final[i]=final[i] + 5;
                        sum=sum/10;
                        break;
                case 4:
                        final[i]=final[i] + 4;
                        sum=sum/10;
                        break;
                case 5:
                        final[i]=final[i] + 5;
                        sum=sum/10;
                        break;
                case 6:
                        final[i]=final[i] + 6;
                        sum=sum/10;
                        break;
                case 7:
                        final[i]=final[i] + 3;
                        sum=sum/10;
                        break;
                case 8:
                        final[i]=final[i] + 7;
                        sum=sum/10;
                        break;
                case 9:
                        final[i]=final[i] + 6;
                        sum=sum/10;
                        break;
                default:
                        sum=sum/10;
                        break;
            }
        }
        i++;
    }
    for(i=0;i<t;i++)
    {
        cout<<final[i]<<endl;
    }
    return 0;
}
