#include<stdio.h>
#include<string.h>
#define size 100
struct StackBinary
{
    int top;
    int data[size];
}s1;
int isOperand(char ch)
{
        if(ch>=48&&ch<=57)
            return 1;
        else
            return 0;
}
void push(int x)
{
    s1.top++;
    s1.data[s1.top]=x;
}
int pop()
{
    if(s1.top!=-1)
    {
        int x=s1.data[s1.top];
        s1.top--;
        return x;
    }
}
void evaluatePostfix(char ex[])
{
    int n,i=0,n1,n2;
    s1.top=-1;
    char item;
    n=strlen(ex);
    ex[n]=')';
    while(ex[i]!=')')
    {
        if(isOperand(ex[i])==1)
        {
            int x=ex[i];
            push(x-48);
        }
        else
        {
            switch(ex[i])
            {
                case '+':
                            n1=pop();
                            n2=pop();
                            push(n2+n1);
                            break;
                case '-':
                            n1=pop();
                            n2=pop();
                            push(n2-n1);
                            break;
                case '*':
                            n1=pop();
                            n2=pop();
                            push(n2*n1);
                            break;
                case '/':
                            n1=pop();
                            n2=pop();
                            push(n2/n1);
                            break;
                case '%':
                            n1=pop();
                            n2=pop();
                            push(n2%n1);
                            break;
                default:    break;
            }
        }
        i++;
    }
    printf("\n\nResult: %d",pop());
}
int main()
{
    char ch='y',ex[100];
    while(ch=='y'||ch=='Y')
    {
        printf("\nWELCOME TO THE POSTFIX EVALUATOR!!! ");
        printf("\n\nEnter the Postfix expression : ");
        scanf(" %s",ex);
        evaluatePostfix(ex);
        printf("\nAgain ? Press Y/N: ");
        scanf(" %c",&ch);
    }
    return 0;
}
