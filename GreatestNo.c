#include<stdio.h>

int main()
{
    int a,b,c;
    printf("\nEnter 3 numbers (a,b,c) : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("Greatest No : a : %d",a);
        else if(a==c)
            printf("Greatest No : a&c are equal : %d ",a);
        else
            printf("Greatest No : c : %d",c);
    }
    else if(b>a)
    {
        if(b>c)
            printf("Greatest No : b : %d",b);
        else if(b==c)
            printf("Greatest No : b&c are equal : %d ",b);
        else
            printf("Greatest No : c : %d",c);
    }
    else
    {
        if(b>c)
            printf("Greatest No : a&b are equal : %d",a);
        else if(b==c)
            printf("Greatest No : a&b&c are equal : %d ",b);
        else
            printf("Greatest No : c : %d",c);
    }
    return 0;
}
