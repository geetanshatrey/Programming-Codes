#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node *next;

}*ptr,*start;
void create()
{
	int n;
	start=NULL;
	printf("\nEnter the number of nodes : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(start==NULL)
		{
			ptr=(struct Node*)malloc(sizeof(struct Node));
			start=ptr;
			printf("Enter the info :");
			scanf("%d",&start->info);
			start->next=NULL;
		}
		else
		{
			ptr->next=(struct Node*)malloc(sizeof(struct Node));
			ptr=ptr->next;
			printf("\nEnter the info :");
			scanf("%d",&ptr->info);
			ptr->next=NULL;
		}
	}
}
void display()
{
	if(start==NULL)
		printf("\nEMPTY !!!");
	else
	{
		ptr=start;
		while(ptr!=NULL)
		{
			printf("\nElement : %d ",ptr->info);
			ptr=ptr->next;

		}
	}
}
void findElement()
{
    int f=0,c=1,x;
    printf("\nEnter the element to be searched : ");
    scanf("%d",&x);
    ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->info==x)
        {
            f=1;
            break;
        }
        c++;
        ptr=ptr->next;
    }
    if(f==1)
    {
        printf("\nFound at node : %d",c);
    }
    else
        printf("\nNot Found.");
}

int main()
{
    create();
    findElement();
    display();
}
