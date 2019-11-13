#include<stdio.h>
#define size 20
struct Queue
{
    int data[size];
    int f,r;
}q1,q2;
void createQueue()
{
    q1.f=-1;
    q1.r=-1;
    q2.f=-1;
    q2.r=-1;
}
void pushQueue()
{
    int x;
    printf("\nEnter the element : ");
    scanf("%d",&x);
    if(q1.f==-1)
    {
        if(q2.r!=size-1)
        {
            q2.r++;
            q2.data[q2.r]=x;
            if(q2.f==-1)
            {
                q2.f=0;
            }
        }
        else
        {
            printf("\nOverflow !!!");
        }
    }
    else
    {
        if(q1.r!=size-1)
        {
            q1.r++;
            q1.data[q1.r]=x;
            if(q1.f==-1)
            {
                q1.f=0;
            }
        }
        else
        {
            printf("\nOverflow !!!");
        }
    }
}
void popQueue()
{
    if(q1.f==-1)
    {
        while(q2.r-q2.f!=0)
        {
            if(q1.f==-1)
                {
                    q1.f++;
                }
            q1.r++;
            q1.data[q1.r]=q2.data[q2.f];
            q2.f++;
        }
        printf("\nDeleted : %d",q2.data[q2.f]);
        q2.f=-1;
        q2.r=-1;
    }
    else if(q2.f==-1)
    {
        while(q1.r-q1.f!=0)
        {
            if(q2.f==-1)
                {
                    q2.f++;
                }
            q2.r++;
            q2.data[q2.r]=q1.data[q1.f];
            q1.f++;
        }
        printf("\nDeleted : %d",q1.data[q1.f]);
        q1.f=-1;
        q1.r=-1;
    }
    else
        printf("\nEmpty !!!");
}
void topElement()
{
    if(q1.f==-1)
    {
        printf("\nTop : %d",q2.data[q2.r]);
    }
    else if(q2.f=-1)
    {
        printf("\nTop : %d",q1.data[q1.r]);
    }
    else
    {
        printf("\nEmpty!!!");
    }
}
int main()
{
    int n;
    char ch='y';
    createQueue();
    while(ch=='y'||ch=='Y')
    {
        printf("\nPress 1 for push into stack using queue :");
        printf("\nPress 2 for pop from stack using queue :");
        printf("\nPress 3 for displaying top element of stack using queue :");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                    pushQueue();
                    break;
            case 2:
                    popQueue();
                    break;
            case 3:
                    topElement();
                    break;
        }
        printf("\n\nWant to continue ?");
        scanf(" %c",&ch);
    }
}
