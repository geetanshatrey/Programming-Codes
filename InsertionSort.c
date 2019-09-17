#include<stdio.h>

void insertionSort(int a[])
{
    int i,j,key;
    for(i=1;i<5;i++)
    {
        key=a[i];
        for(j=i-1;j>=0&&a[j]>key;j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }
}

int main()
{
    int i,a[10];
    for(int i=0;i<5;i++)
    {
        printf("\nEnter element a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    insertionSort(a);
    for(i=0;i<5;i++)
    {
        printf("\nElement a[%d] : %d",i,a[i]);
    }
    return 0;
}

