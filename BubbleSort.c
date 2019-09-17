#include<stdio.h>

void bubbleSort(int a[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int a[10],i;
    for(int i=0;i<5;i++)
    {
        printf("\nEnter element a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    bubbleSort(a);
    for(i=0;i<5;i++)
    {
        printf("\nElement a[%d] : %d",i,a[i]);
    }
    return 0;
}

