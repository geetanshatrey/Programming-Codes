#include<stdio.h>
#include<stdlib.h>
struct Node
{
      int elt;
      struct Node *next;
}*front,*rear;
void create()
{
      int num;
      char ch='y';
      struct Node *ptr;
      ptr=(struct Node*)malloc(sizeof(struct Node));
      front=NULL;
      rear=NULL;
      while(ch=='y'||ch=='Y')
      {
            if(ptr==NULL)
            {
                  printf("\nOVERFLOW !!!");
            }
            else
            {
                  if(front==NULL)
                  {
                        front=ptr;
                        rear=ptr;
                        printf("\nEnter the element : ");
                        scanf("%d",&ptr->elt);
                        ptr->next=NULL;
                  }
                  else
                  {
                        ptr->next=(struct Node*)malloc(sizeof(struct Node));
                        ptr=ptr->next;
                        rear=ptr;
                        printf("\nEnter the element : ");
                        scanf("%d",&ptr->elt);
                        ptr->next=NULL;
                  }
            }
            printf("\nWant to add more ?? ");
            scanf(" %c",&ch);      
      }
}
void insertElement()
{
      struct Node *ptr;
      ptr=(struct Node*)malloc(sizeof(struct Node));
      if(ptr==NULL)
      {
            printf("\nOVERFLOW!!!\n");
      }
      else
      {
                  if(front==NULL)
                  {
                        front=ptr;
                        rear=ptr;
                        printf("\nEnter the element : ");
                        scanf("%d",&ptr->elt);
                        ptr->next=NULL;
                  }
                  else
                  {
                        printf("\nEnter the element : ");
                        scanf("%d",&ptr->elt);
                        rear->next=ptr;
                        ptr->next=NULL;
                  }
                  printf("\nINSERTED : %d\n",ptr->elt);             
      }
}
void deleteElement()
{
      if(front==NULL)
      {
            printf("\nUNDERFLOW!!!\n");
      }
      else
      {
            struct Node *temp;
            if(front!=rear)
            {
                printf("\nDELETED : %d\n",front->elt);
                temp=front;
                front=front->next;  
                free(temp);
            }    
            else
            {
                  printf("\nDELETED : %d\n",front->elt);
                  front=NULL;
                  rear=NULL;
                  
            }
      }
}
void display()
{
      struct Node *ptr;
      ptr=front;
      while(ptr!=NULL)
      {
            printf("\nElement : %d",ptr->elt);
            ptr=ptr->next;
      }

}
int main()
{
      int n;
      char ch='y';
      printf("\nWELCOME TO THE MENU !!! ");
      create();
      while(ch=='y'||ch=='Y')
      {
            printf("\n Press 1 to insert an element : ");
            printf("\n Press 2 to delete an element : ");
            printf("\n Enter your choice  : ");
            scanf("%d",&n);
            switch(n)
            {
                  case 1: 
                              insertElement();
                              display();
                              break;
                  case 2:
                              deleteElement();
                              display();            
                              break;
                  default:
                              break;                              
            };
            printf("\nWant to Continue ?? ");
            scanf(" %c",&ch);
      }
}
