#include<stdio.h>
#define size 100
struct StackBinary
{
    int top;
    int data[size];
}s1;
void pushIntoStack(int num)
{
    s1.top=-1;
    while((num>0)&&(s1.top!=size-1))
    {
        s1.top++;
        s1.data[s1.top]=num%2;
        num=num/2;
    }
}
int popFromStack()
{
    int x;
    while(s1.top!=-1)
    {
        x=s1.data[s1.top];
        s1.top--;
        return x;
    }
}
int isEmpty()
{
    if(s1.top==-1)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        printf("\nWELCOME TO THE BINARY CALCULATOR!!! ");
        printf("\n\nEnter the number in decimal : ");
        scanf("%d",&num);
        pushIntoStack(num);
        printf("\nBinary : ");
        while(isEmpty()!=1)
        {
            printf("%d",popFromStack());
        }
        printf("\nAgain ? Press Y/N: ");
        scanf(" %c",&ch);
    }
    return 0;
}
