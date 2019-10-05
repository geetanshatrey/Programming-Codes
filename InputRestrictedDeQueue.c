#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int elt;
    struct Node *next;
}*front,*rear;

void create()
{
    front=NULL;
    rear=NULL;
    char ch;
    printf("\nWant to add element to the queue ?? ");
    scanf(" %c",&ch);
    struct Node *ptr;
    while(ch=='y'||ch=='Y')
    {

            if(front==NULL)
            {
                ptr=(struct Node*)malloc(sizeof(struct Node));
                if(ptr==NULL)
                {
                    printf("\nOVERFLOW !!!");
                }
                else
                {
                    front=ptr;
                    rear=ptr;
                    printf("\nEnter the element :");
                    scanf("%d",&ptr->elt);
                    ptr->next=NULL;
                }
            }
            else
            {
                ptr->next=(struct Node*)malloc(sizeof(struct Node));
                ptr=ptr->next;
                rear=ptr;
                printf("\nEnter the element :");
                scanf("%d",&ptr->elt);
                ptr->next=NULL;
            }
        printf("\nWant to add more element to the queue ??  ");
        scanf(" %c",&ch);
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
                        rear=ptr;
                        ptr->next=NULL;
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
    int ch;
    char con='y';
    printf("\nWELCOME TO THE INPUT RESTRICTED DEQUEUE : \n");
    create();
    while(con=='y'||con=='Y')
    {
        printf("\nPress 1 for Insertion at REAR.");
        printf("\nPress 2 for Deletion from FRONT.");
        printf("\nPress 3 for Deletion from REAR.");
        printf("\nEnter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    insertRear();
                    display();
                    break;
            case 2:
                    deleteFront();
                    display();
                    break;
            case 3:
                    deleteRear();
                    display();
                    break;
        }
        printf("\nWant to Continue ?  ");
        scanf(" %c",&con);
    }
    return 0;
}
