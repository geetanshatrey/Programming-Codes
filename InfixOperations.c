#include<stdio.h>
#include<string.h>
#define size 100
char infix[size];
struct StackUsed
{
    char data[size];
    int top;
}s;
void makeStack()
{
    s.top=-1;
}
void push(char x)
{
    if(s.top==size-1)
    {
        printf("\nOverflow");
    }
    else
    {
        s.top++;
        s.data[s.top]=x;
    }
}
char pop()
{
    if(s.top==-1)
    {
        printf("\nEmpty");
    }
    else
    {
        s.top--;
        return s.data[s.top+1];
    }
}
int precedence(char x)
{
    if(x== '^')
	{
		return(3);
	}
	else if(x== '*' ||x== '/')
	{
		return(2);
	}
	else if(x== '+' || x== '-')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
void inToPost()
{
    push('(');
    char item,x;
    int i=0;
    while(s.top!=-1)
    {
        item=infix[i];
        if((item>=48&&item<=57)||(item>=65&&item<=90)||(item>=97&&item<=122))
        {
            printf("%c",item);
        }
        if(item=='(')
        {
            push('(');
        }
        if(item=='+'||item=='-'||item=='/'||item=='*'||item=='^')
        {
            x=pop();
            if(x!='(')
            {
                if(precedence(item)>=precedence(x))
                {
                    while(precedence(item)>=precedence(x))
                    {
                        printf("%c",x);
                        x=pop();
                        if(x=='(')
                            break;
                    }
                }
            }
            push(x);
            push(item);
        }
        if(item==')')
        {
            x=pop();
            while(x!='(')
            {
                printf("%c",x);
                x=pop();
            }
        }
        i++;
    }
}
int main()
{
    int n,le;
    char ch='y';
    while(ch=='y'||ch=='Y')
    {
        printf("\nEnter the prefix Expression :");
        scanf("%s",infix);
        le=strlen(infix);
        infix[le]=')';
        makeStack();
        inToPost();
        break;
        printf("\n\nWant to continue??");
        scanf(" %c",&ch);
    }
}
