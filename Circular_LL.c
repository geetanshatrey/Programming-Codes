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
		}
		else
		{
			ptr->next=(struct Node*)malloc(sizeof(struct Node));
			ptr=ptr->next;
			printf("\nEnter the info :");
			scanf("%d",&ptr->info);
		}
		ptr->next=start;
	}
}
void insertBeg()
{
    struct Node *m;
    m=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter the info: ");
    scanf("%d",&m->info);
    m->next=start;
    ptr=start;
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }
    ptr->next=m;
    start=m;
}
void insertAny()
{
	int n,i=0;
	if(start==NULL)
		printf("\nEMPTY !!!");
	else
	{
		struct Node *m;
		m=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter the position for insertion : ");
		scanf("%d",&n);
		ptr=start;
		while(i<n-2&&ptr->next!=start)
		{
			ptr=ptr->next;
			i++;
		}
		if(n>0)
        {
            m->next=ptr->next;
            ptr->next=m;
            printf("\nEnter the info: ");
            scanf("%d",&m->info);
        }
        else
        {
            m->next=ptr;
            ptr=start;
            while(ptr->next!=start)
            {
                ptr=ptr->next;
            }
            ptr->next=m;
            start=m;
        }
	}
}
void insertEnd()
{
	if(start==NULL)
		printf("\nEMPTY !!!");
	else
	{
		struct Node *m;
		m=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter the info: ");
		scanf("%d",&m->info);
		ptr=start;
		while(ptr->next!=start)
		{
			ptr=ptr->next;
		}
		m->next=ptr->next;
		ptr->next=m;
	}

}
void delBeg()
{
	struct Node *m;
	ptr=start;
	if(start==NULL)
		printf("\nEMPTY !!!");
	else
	{
		m=start;
		while(ptr->next!=start)
        {
            ptr=ptr->next;
        }
		start=start->next;
		ptr->next=start;
		free(m);

	}

}
void delAny()
{
	int n,i=0;
	struct Node *m;
	if(start==NULL)
		printf("\nEMPTY !!!");
	else
	{

		printf("\nEnter the position for deletion : ");
		scanf("%d",&n);
		ptr=start;
		while(i<n-2&&ptr->next!=start)
		{
			ptr=ptr->next;
			i++;
		}
		if(n>0)
		{
		    m=ptr->next;
            ptr->next=ptr->next->next;
            free(m);
		}
		else
        {
            m=ptr;
            ptr=start;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=m->next;
            ptr=m->next;
            free(m);
            start=ptr;
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
		do
		{
			printf("\nElement : %d ",ptr->info);
			ptr=ptr->next;
		}while(ptr!=start);

	}

}
void delEnd()
{
	struct Node *m;
	if(start==NULL)
		printf("\nEMPTY !!!");
	else
	{
		ptr=start;
		while(ptr->next->next!=start)
		{
			ptr=ptr->next;

		}
		m=ptr->next;
		ptr->next=ptr->next->next;
		free(m);
	}
}
void reverseCLList()
{
    struct Node *q,*r=NULL;
    ptr=start;
    q=ptr;
    do
    {
        ptr=ptr->next;
        q->next=r;
        r=q;
        q=ptr;
    }while(q!=start);
    q->next=r;
    start=r;
}
int main()
{
	int num;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		 printf("\n\n\nWELCOME TO THE MENU !!!!");
		 printf("\nPress 1 for Creation :");
		 printf("\nPress 2 for Insert at Beginning :");
		 printf("\nPress 3 for Insert at End :");
		 printf("\nPress 4 for Insert at Any Position :");
		 printf("\nPress 5 for Delete at Beginning :");
		 printf("\nPress 6 for Delete at any Position :");
		 printf("\nPress 7 for Delete from End :");
		 printf("\nPress 8 for Reversing a Circular LL: ");
		 printf("\nPress 9 for Display :");
		 printf("\n\nEnter your choice :");
		 scanf("%d",&num);
		 switch(num)
		 {
		 	case 1:
		 		create();
		 		break;
		 	case 2:
		 		insertBeg();
		 		break;
		 	case 3:
		 		insertEnd();
		 		break;
		 	case 4:

		 		insertAny();
		 		break;
		 	case 5:
		 		delBeg();
		 		break;
		 	case 6:
		 		delAny();
		 		break;
		 	case 7:
		 		delEnd();
		 		break;
            case 8:
                reverseCLList();
                break;
		 	case 9:
		 		display();
		 		break;
		 	default:
		 		break;

		 }
		 printf("\nWant to Continue ???  ");
		 scanf(" %c",&ch);
	}
	 return 0;
}
