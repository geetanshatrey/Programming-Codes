#include<stdio.h>
#define max 100
struct stackStruct
{
       int data[max];
       int top;
}ar;
void createStack()
{
       char c='y';
       ar.top=-1;     
       while(c=='y'||c=='Y')
       {
              if(ar.top<max)
              {       
                   
                     ar.top++;
                     printf("\nEnter the element : ");
                     scanf("%d",&ar.data[ar.top]);
                     printf("\nAdd More Elements ??  ");
                     scanf(" %c",&c);
              }
              else
                     printf("\nOVERFLOW !!! :");
       }
}
void pushStack()
{
       int item;      
       if(ar.top==max-1)
       {
              printf("\nOverflow !!! ");
       }
       else
       {
              printf("\nEnter the element : ");
              scanf("%d",&item);      
              ar.top++;
              ar.data[ar.top]=item; 
              ar.top++;
              printf("\nPUSHED !!! ");
              for(int i=ar.top-1;i>=0;i--)
              {
                     printf("\nInfo : %d",ar.data[i]);
              } 
        }                 
}
void popStack()
{
       if(ar.top==-1)
              printf("\nUNDERFLOW !!! ");
       else
       {
              ar.top--;
              printf("\nPOPPED !!! ");
              for(int i=ar.top-1;i>=0;i--)
              {
                     printf("\nInfo : %d",ar.data[i]);
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
