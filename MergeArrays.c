#include<stdio.h>
int main()
{
    int a[100],b[100],i,j,k,t=0,temp=0,m,n,f=0;
    printf("Enter the size of arrays : ");
    scanf("%d",&n);
    printf("\n\nEnter the array 1 : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\nEnter the array 2 : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
        }
        for(k=i+1;k<n;k++)
        {
               if(b[i]<b[k])
                {
                    t=b[i];
                    b[i]=b[k];
                    b[k]=t;
                }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n: %d",a[i]);

    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d",b[i]);

    }
    m=n;
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<m;j++)
        {
                if(b[i]>a[j])
                {
                    for(k=m;k>j;k--)
                    {
                        a[k]=a[k-1];
                    }
                    a[j]=b[i];
                    m=m+1;
                    f=1;
                    break;
                }

        }
        if(f==0)
        {
            a[m]=b[i];
            m=m+1;
        }
    }
    for(i=0;i<(2*n);i++)
    {
        printf("\nElement : %d ",a[i]);

    }
    return 0;
}
