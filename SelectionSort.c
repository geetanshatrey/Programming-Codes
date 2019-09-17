#include<stdio.h>

void selectionSort(int a[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
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
    selectionSort(a);
    for(i=0;i<5;i++)
    {
        printf("\nElement a[%d] : %d",i,a[i]);
    }
    return 0;
}

