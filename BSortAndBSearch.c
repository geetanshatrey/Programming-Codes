#include<stdio.h>
#define size 100

void bubbleSort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void binarySearch(int a[],int fir,int mid,int las,int index)
{
    if(fir>las)
    {
        printf("\nNot found");
        return;
    }
    mid=(fir+las)/2;
    if(a[mid]==index)
    {
        printf("\nElement Found at Index : %d",mid);
        return;
    }
    else if(a[mid]<index)
    {
        binarySearch(a,mid+1,mid,las,index);
    }
    else if(a[mid]>index)
    {
        binarySearch(a,fir,mid,mid-1,index);
    }
}

int main()
{
    int a[size],n;
    int mid,fir,las,index;
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the array element a[%d]:",i);
        scanf("%d",&a[i]);
    }
    bubbleSort(a,n);
    fir=0;
    las=size;
    mid=(fir+las)/2;
    printf("\nEnter the element to be searched :");
    scanf("%d",&index);
    binarySearch(a,fir,mid,las,index);
}
