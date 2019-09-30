#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int elt;
    struct Node *next;
}*front,*rear;

void create()
{
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
void insertFront()
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
                        scanf("%d",&ptr->elt);;
                        ptr->next=front;
                        front=ptr;
                  }
                  printf("\nINSERTED AT FRONT : %d\n",ptr->elt);
      }
}
void insertRear()
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
                        rear=ptr;
                  }
                  printf("\nINSERTED AT REAR : %d\n",ptr->elt);
      }
}
void deleteFront()
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
                printf("\nDELETED FROM FRONT : %d\n",front->elt);
                temp=front;
                front=front->next;
                free(temp);
            }
            else
            {
                  printf("\nDELETED FROM FRONT : %d\n",front->elt);
                  front=NULL;
                  rear=NULL;

            }
      }
}

void deleteRear()
{
      if(front==NULL)
      {
            printf("\nUNDERFLOW!!!\n");
      }
      else
      {
            struct Node *temp,*ptr;
            if(front!=rear)
            {
                ptr=front;
                while(ptr->next!=rear)
                {
                   ptr=ptr->next;
                }
                printf("\nDELETED FROM REAR: %d\n",rear->elt);
                temp=rear;
                rear=ptr;
                free(temp);
                rear->next=NULL;
            }
            else
            {
                  printf("\nDELETED FROM REAR: %d\n",rear->elt);
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
      printf("\nWELCOME TO THE MENU !!! \n\n");
      create();
      while(ch=='y'||ch=='Y')
      {
            printf("\n Press 1 to insert an element in FRONT: ");
            printf("\n Press 2 to insert an element in REAR: ");
            printf("\n Press 3 to delete an element from FRONT: ");
            printf("\n Press 4 to delete an element from REAR: ");
            printf("\n Enter your choice  : ");
            scanf("%d",&n);
            switch(n)
            {
                  case 1:
                              insertFront();
                              display();
                              break;
                  case 2:
                              insertRear();
                              display();
                              break;
                  case 3:
                              deleteFront();
                              display();
                              break;
                  case 4:
                              deleteRear();
                              display();
                              break;
                  default:
                              break;
            };
            printf("\nWant to Continue ?? ");
            scanf(" %c",&ch);
      }
}
