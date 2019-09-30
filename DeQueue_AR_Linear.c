#include<stdio.h>
# define MAX 50
struct ArrayQueue
{
      int elt[MAX];
      int f;
      int r;
}q;
void create()
{
      int num;
      char ch='y';
      q.f=-1;
      q.r=-1;
      while(ch=='y'||ch=='Y')
      {
            if(q.r==MAX-1)
            {
                  printf("\nOVERFLOW !!!");
            }
            else
            {
                  if(q.f==-1)
                  {
                        q.f=0;
                  }
                  q.r++;
                  printf("\nEnter the element : ");
                  scanf("%d",&q.elt[q.r]);
            }
            printf("\nWant to add more ?? ");
            scanf(" %c",&ch);
      }
}
void insertFront()
{
      if(q.r==MAX-1)
      {
            printf("\nOVERFLOW!!!\n");
      }
      else
      {
                  if(q.f==-1)
                  {
                        q.f=0;
                        q.r=0;
                  }
                  else
                  {
                        for(int i=q.r;i>=q.f;i--)
                        {
                            q.elt[i+1]=q.elt[i];
                        }
                        q.r++;
                  }
                  printf("\nEnter the element : ");
                  scanf("%d",&q.elt[q.f]);
                  printf("\nINSERTED AT FRONT : %d\n",q.elt[q.f]);
      }
}
void insertRear()
{
      if(q.r==MAX-1)
      {
            printf("\nOVERFLOW!!!\n");
      }
      else
      {
                  if(q.f==-1)
                  {
                        q.f=0;
                  }
                  q.r++;
                  printf("\nEnter the element : ");
                  scanf("%d",&q.elt[q.r]);
                  printf("\nINSERTED AT REAR : %d\n",q.elt[q.r]);
      }
}

void deleteFront()
{
      if(q.f==-1)
      {
            printf("\nUNDERFLOW!!!\n");
      }
      else
      {
            printf("\nDELETED FROM FRONT : %d\n",q.elt[q.f]);
            if(q.f==q.r)
            {
                  q.f=-1;
                  q.r=-1;
            }
            else
            {
                  q.f++;
            }
      }
}
void deleteRear()
{
      if(q.f==-1)
      {
            printf("\nUNDERFLOW!!!\n");
      }
      else
      {
            printf("\nDELETED FROM REAR : %d\n",q.elt[q.r]);
            if(q.f==q.r)
            {
                  q.f=-1;
                  q.r=-1;
            }
            else
            {
                  q.r--;

            }
      }
}
void display()
{
      int i=0;
      for(int i=q.f;i<=q.r;i++)
      {
            printf("\nElement : %d",q.elt[i]);
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

