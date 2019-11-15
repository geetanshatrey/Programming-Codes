#include<stdio.h>
#define size 100
void binarySearch(int arr[],int fir,int mid,int las,int index)
{
    if(fir>las)
    {
        printf("\nNot Found !");
        return;
    }
    mid=(fir+las)/2;
    if(arr[mid]>index)
    {
        binarySearch(arr,fir,mid,mid-1,index);
    }
    else if(arr[mid]<index)
    {
        binarySearch(arr,mid+1,mid,las,index);
    }
    else if(arr[mid]==index)
    {
        printf("\nFound at position : %d",mid+1);
        return;
    }
}
int main()
{
    int arr[size],n;
    int mid,fir,las,index;
    printf("\nEnter the size of sorted array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the array element a[%d]:",i);
        scanf("%d",&arr[i]);
    }
    fir=0;
    las=size;
    mid=(fir+las)/2;
    printf("\nEnter the element to be searched :");
    scanf("%d",&index);
    binarySearch(arr,fir,mid,las,index);
}
