#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r,c;
    printf("enter number of row and column for 2d array\n");
    scanf("%d%d",&r,&c);
    int i,j,m=0,n=0,arr1[r][c],arr2[r][c],cou1=0,cou2=0;

    printf("enter 2d array 1 elements\n");
    for( i=0;i<r;i++)
        for(j=0;j<c;j++)
           {
             scanf("%d",&arr1[i][j]);
             if(arr1[i][j]!=0)
                cou1++;
           }
int sparce1[r+1][3],sparce2[r+1][3];
printf("sparce format of matrix 1\n");

    sparce1[m][0]=r;
    sparce1[m][1]=c;
    sparce1[m][2]=cou1;
    m++;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(arr1[i][j]!=0)
            {
                sparce1[m][0]=i;
                sparce1[m][1]=j;
                sparce1[m][2]=arr1[i][j];
                m++;
            }
for(int i=0;i<m;i++)
    {
        printf("%d\t%d\t%d\n",sparce1[i][0],sparce1[i][1],sparce1[i][2]);
        if (i==0)
                     printf("__________________\n");
    }
printf("enter 2d array 2 elements\n");
    for( i=0;i<r;i++)
        for(j=0;j<c;j++)
           {
             scanf("%d",&arr2[i][j]);
             if(arr2[i][j]!=0)
                cou2++;
           }
printf("sparce format of matrix 2\n");

    sparce2[n][0]=r;
    sparce2[n][1]=c;
    sparce2[n][2]=cou2;
    n++;
    printf("%d\n",sparce1[0][0]);
    printf("%d\n",sparce1[0][1]);
    printf("%d\n",sparce1[0][2]);
 for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(arr2[i][j]!=0)
            {
                sparce2[n][0]=i;
                sparce2[n][1]=j;
                sparce2[n][2]=arr2[i][j];
                n++;
            }
    printf("\n");
    printf("%d\n",sparce1[0][0]);
    printf("%d\n",sparce1[0][1]);
    printf("%d\n",sparce1[0][2]);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\n",sparce2[i][0],sparce2[i][1],sparce2[i][2]);
        if (i==0)
                     printf("__________________\n");
    }
  //sparce addition
int sparce3[cou1+cou2][3];
int k,x=1;
i=1,j=1;
while(i<=sparce1[0][2]&&j<=sparce2[0][2])
{
 if(sparce1[i][0]<sparce2[j][0])
 {
     for(k=0;k<3;k++)
        sparce3[x][k]=sparce1[i][k];
     i++;
     x++;
 }
 else if(sparce1[i][0]>sparce2[j][0])
 {
     for(k=0;k<3;k++)
        sparce3[x][k]=sparce2[j][k];
     j++;
     x++;
 }
 else if(sparce1[i][1]<sparce2[j][1])
 {
     for(k=0;k<3;k++)
        sparce3[x][k]=sparce1[i][k];
     i++;
     x++;
 }
 else if(sparce1[i][1]>sparce2[j][1])
 {
     for(k=0;k<3;k++)
        sparce3[x][k]=sparce2[j][k];
     j++;
     x++;
 }
 else
 {
     for(k=0;k<3;k++)
        sparce3[x][k]=sparce1[i][k];

     sparce3[x][2]+=sparce2[j][2];
     i++;
     j++;
     x++;
 }
}
while(i<=sparce1[0][2])
{
    for(k=0;k<3;k++)
        sparce3[x][k]=sparce1[i][k];
    i++;
    x++;
}
while(j<=sparce2[0][2])
{
    for(k=0;k<3;k++)
        sparce3[x][k]=sparce2[j][k];
    j++;
    x++;
}
sparce3[0][0]=sparce1[0][0];
sparce3[0][1]=sparce1[0][1];
sparce3[0][2]=x-1;

//printing sum of sparce
printf("sum of two sparce matrix in sparce form\n");
for(int i=0;i<x;i++)
    {
        printf("%d\t%d\t%d\n",sparce3[i][0],sparce3[i][1],sparce3[i][2]);
        if (i==0)
                     printf("__________________\n");
    }
    return 0;
}
