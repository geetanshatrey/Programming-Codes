#include<stdio.h>
#define size 100

void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nBUBBLE SORT DONE !\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void insertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
                a[j]=temp;
            }
            else
                break;
        }
    }
    printf("\nINSERTION SORT DONE !\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    printf("\nSELECTION SORT DONE !\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void mergeArray(int a[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[lb];
    while(i<=mid&&j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
        }
        else
        {
            b[k]=a[i];
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            mid++;
        }
    }
    for(int i=0;i<ub;i++)
    {
        a[i]=b[i];
    }
}
void mergeSort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        mergeArray(a,lb,mid,ub);
    }
    printf("\nMERGE SORT DONE !\n");
    for(int i=0;i<ub;i++)
    {
        printf("%d ",a[i]);
    }
}

int part_quick(int a[],int lb,int ub)
{
    int pivot=a[lb],temp;
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }

        if(start<end)
        {
            temp=a[end];
            a[end]=a[start];
            a[start]=temp;
        }
    }
    int f=a[lb];
    a[lb]=a[end];
    a[end]=f;
    return end;
}
void quickSort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=part_quick(a,lb,ub);
        quickSort(a,lb,loc-1);
        quickSort(a,loc+1,ub);
    }
}
void heapSort()
{
}
void radixSort()
{
}
int main()
{
    int a[size],n,ch;
    printf("\nEnter the size of the array :");
    scanf("%d",&n);
    printf("\nEnter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nPress 1 for bubble sort : ");
    printf("\nPress 2 for insertion sort : ");
    printf("\nPress 3 for selection sort : ");
    printf("\nPress 4 for merge sort : ");
    printf("\nPress 5 for quick sort : ");
    printf("\nPress 6 for heap sort : ");
    printf("\nPress 7 for radix sort : ");
    printf("\n\nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                bubbleSort(a,n);
                break;
        case 2:
                insertionSort(a,n);
                break;
        case 3:
                selectionSort(a,n);
                break;
        case 4:
                mergeSort(a,0,n);
                break;
        case 5:
                quickSort(a,0,n-1);
                printf("\nQUICK SORT DONE !\n");
                for(int i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }
                break;
        case 6:
                heapSort(a);
                break;
        case 7:
                radixSort(a);
                break;
    }
}
