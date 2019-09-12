#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 2 numbers : \n");
    scanf("%d %d",&a,&b);
    printf("Addition : %d",a+b);
    printf("\nSubtraction : %d",a-b);
    printf("\nMultiplication : %d",a*b);
    printf("\nDivision : %f",(float)a/b);
    return 0;
}
