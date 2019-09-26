#include<stdio.h>
# define MAX 8
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
            if((q.r==MAX-1&&q.f==0)||q.f-q.r==1)
            {
                  printf("\nOVERFLOW !!!");
            }
            else
            {
                  if(q.f==-1)
                  {
                        q.f=0;
                  }
                  if(q.r==MAX-1)
                  {
                        q.r=0;
                  }
                  else
                  {
                        q.r++;
                  }
                  printf("\nEnter the element : ");
                  scanf("%d",&q.elt[q.r]);
            }
            printf("\nWant to add more ?? ");
            scanf(" %c",&ch);      
      }
      
}
void insertElement()
{
            if((q.r==MAX-1&&q.f==0)||q.f-q.r==1)
            {
                  printf("\nOVERFLOW !!!");
            }
            else
            {
                  if(q.f==-1)
                  {
                        q.f=0;
                  }
                  if(q.r==MAX-1)
                  {
                        q.r=0;
                  }
                  else
                  {
                        q.r++;
                  }
                  printf("\nEnter the element : ");
                  scanf("%d",&q.elt[q.r]);
                  printf("\nINSERTED : %d\n",q.elt[q.r]);
            }
}
void deleteElement()
{
      if(q.f==-1)
      {
            printf("\nUNDERFLOW!!!\n");
      }
      else
      {
            printf("\nDELETED : %d\n",q.elt[q.f]);
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
void display()
{
      int i=0;
      if(q.r>q.f)
      {
            for(int i=q.f;i<=q.r;i++)
            {
                  printf("\nElement : %d",q.elt[i]);
            }
      }
      else
      {
            for(int i=q.f;i<=MAX-1;i++)
            {
                  printf("\nElement : %d",q.elt[i]);
            }
            for(int i=0;i<=q.r;i++)
            {
                  printf("\nElement : %d",q.elt[i]);
            }
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
