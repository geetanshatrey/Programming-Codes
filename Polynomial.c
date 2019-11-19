 #include<math.h>
#include<stdio.h>
#define MAX 17
void init(int p[]);
void read(int p[]);
void print(int p[]);
void add(int p1[],int p2[],int p3[]);
void multiply(int p1[],int p2[],int p3[]);

/*Polynomial is stored in an array, p[i] gives coefficient of x^i .
  a polynomial 3x^2 + 12x^4 will be represented as (0,0,3,0,12,0,0,….)
*/

void main()
{
int p1[MAX],p2[MAX],p3[MAX];
int option;
do
{
printf("\n 1 : create 1’st polynomial");
printf("\n 2 : create 2’nd polynomial");
printf("\n 3 : Add polynomials");
printf("\n 4 : Multiply polynomials");
printf("\n 5 : Quit");
printf("\n Enter your choice :");
scanf("%d",&option);
switch(option)
{
case 1:read(p1);break;
case 2:read(p2);break;
case 3:add(p1,p2,p3);
      printf("\n 1'st polynomial -> ");
      print(p1);
      printf("\n 2’nd polynomial -> ");
      print(p2);
      printf("n Sum = ");
      print(p3);
      break;
case 4:multiply(p1,p2,p3);
      printf("\n 1'st polynomial -> ");
      print(p1);
      printf("\n 2'nd polynomial -> ");
      print(p2);
      printf("\n Product = ");
      print(p3);
      break;
}
}while(option!=5);
}
void read(int p[])
{
int n, i, power,coeff;
init(p);
printf("\n Enter number of terms :");
scanf("%d",&n);
/* read n terms */
for (i=0;i<n;i++)
{       printf("\n enter a term(power  coeff.)");
scanf("%d%d",&power,&coeff);
p[power]=coeff;
}
}
void print(int p[])
{
int i;
for(i=0;i<MAX;i++)
if(p[i]!=0)
printf("%dX^%d   ",p[i],i);
}
void add(int p1[], int p2[], int p3[])
{
    int i;
    for(i=0;i<MAX;i++)
p3[i]=p1[i]+p2[i];
}

void  multiply(int p1[], int p2[], int p3[])
{
int i,j;
init(p3);
for(i=0;i<MAX;i++)
for(j=0;j<MAX;j++)
   p3[i+j]=p3[i+j]+p1[i]*p2[j];
}
void init(int p[])
{
    int i;
    for(i=0;i<MAX;i++)
p[i]=0;
}
