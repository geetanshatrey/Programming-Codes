#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int info;
	struct Node *next,*prev;

}*ptr,*start;
void create()
{
	int n;
	start=NULL;
	printf("\nEnter the number of nodes : ");
	scanf("%d",&n);
	ptr=(struct Node*)malloc(n*sizeof(struct Node));
	for(int i=0;i<n;i++)
	{
		if(start==NULL)
		{
			ptr=(struct Node*)malloc(sizeof(struct Node));
			start=ptr;
			printf("Enter the info :");
			scanf("%d",&start->info);
			start->next=NULL;
			start->prev=NULL;
		}
		else
		{
			ptr->next=(struct Node*)malloc(sizeof(struct Node));
			ptr->next->prev=ptr;
			ptr=ptr->next;
			printf("\nEnter the info :");
			scanf("%d",&ptr->info);
		}
	}
	ptr->next=NULL;	
}
void insertBeg()
{
	if(start==NULL)
		printf("\nEMPTY !!!");
	else
	{
		struct Node *m;
		m=(struct Node*)malloc(sizeof(struct Node));
		printf("\nEnter the info: ");
		scanf("%d",&m->info);
		m->next=start;
		start->prev=m;
		start=m;
		m->prev=NULL;
	}	

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
		while(i<n-2)
		{
			ptr=ptr->next;
			i++;
		}
		m->next=ptr->next;
		ptr->next=m;
		m->prev=ptr;
		ptr=ptr->next->next;
		ptr->prev=m;
		printf("\nEnter the info: ");
		scanf("%d",&m->info);
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
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=m;
		m->prev=ptr;
		m->next=NULL;
	}	

}
void delBeg()
{
	struct Node *m;
	if(start==NULL)
		printf("\nEMPTY !!!");	
	else
	{
		m=start;
		start=start->next;
		free(m);
		start->prev=NULL;
		
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
		while(i<n-2)
		{
			ptr=ptr->next;
			i++;
		}
		m=ptr->next;
		ptr->next->next->prev=ptr;
		ptr->next=ptr->next->next;
		free(m);
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
void delEnd()
{
	struct Node *m;
	if(start==NULL)
		printf("\nEMPTY !!!");
	else
	{
		ptr=start;
		while(ptr->next->next!=NULL)
		{
			ptr=ptr->next;
		
		}
		m=ptr->next;
		ptr->next=NULL;
		free(m);
	}	
		
	

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
		 printf("\nPress 4 for Insert at Any Position :");	 	 	 	 	         printf("\nPress 5 for Delete at Beginning :");
		 printf("\nPress 6 for Delete at any Position :");
		 printf("\nPress 7 for Delete from End :");
		 printf("\nPress 8 for Display :");
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
