#include<stdio.h>

int add(int,int);

int main()
{
    int a,b,sum;
    printf("\nEnter 2 numbers :\n");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("\nSum: %d",sum);
    return 0;
}

int add(int x,int y)
{
    return x+y;
}
