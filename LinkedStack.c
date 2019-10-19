#include<stdio.h>
#include<stdlib.h>
struct Node 
{
       int info;
       struct Node *next;
}*top,*ptr;
void createStack()
{
       char c='y';      
       while(c=='y'||c=='Y')
       {
              if(top==NULL)
              {
                     ptr=(struct Node*)malloc(sizeof(struct Node));
                     top=ptr;
                     printf("\nEnter the info : ");
                     scanf("%d",&top->info);
                     top->next=NULL;
                     
              }
              else
              {
                     ptr=(struct Node*)malloc(sizeof(struct Node));
                     ptr->next=top;
                     top=ptr;
                     printf("\nEnter the info : ");
                     scanf("%d",&ptr->info);
              }
              printf("\nAdd More Elements ??  ");
              scanf(" %c",&c);
       }
}
void pushStack()
{
       struct Node *m,*ptr;
       m=(struct Node*)malloc(sizeof(struct Node));     
       m->next=top;
       top=m;
       printf("\nEnter the info : ");
       scanf("%d",&top->info);
       ptr=top;
       printf("\nPUSHED !!! ");
       while(ptr!=NULL)
       {
              printf("\nInfo : %d",ptr->info);
              ptr=ptr->next;
       }            
}
void popStack()
{
       if(top==NULL)
              printf("\nUNDERFLOW !!! ");
       else
       {
              struct Node *ptr;
              ptr=top;
              top=top->next;
              free(ptr);
              ptr=top;
              printf("\nPOPPED !!! ");
              while(ptr!=NULL)
              {
                     printf("\nInfo : %d",ptr->info);
                     ptr=ptr->next;
              }    
       
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
		 printf("\nPress 2 for Push :");
		 printf("\nPress 3 for Pop :");
		 printf("\n\nEnter your choice :");
		 scanf("%d",&num);
		 switch(num)
		 {
		 	case 1:
		 		createStack();
		 		break;	 
		 	case 2:
		 		pushStack();
		 		break;
		 	case 3:
		 		popStack();
		 		break;
		 	default:
		 		break;
		 
		 }
		 printf("\nWant to Continue ???  ");
		 scanf(" %c",&ch);
	}		
	 return 0; 
}
