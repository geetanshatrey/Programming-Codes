#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c,count1=0,count2=0,f=0,k,rfi=0;
    int sparse1[100][3],sparse2[100][3],final[100][3],m=1,n=1;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("\nEnter the number of columns : ");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nEnter the element a[%d][%d] for Array 1 : ",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                count1++;
            }
        }
        printf("\n");
    }
    sparse1[0][0]=r;
    sparse1[0][1]=c;
    sparse1[0][2]=count1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                sparse1[m][0]=i;
                sparse1[m][1]=j;
                sparse1[m][2]=a[i][j];
                m++;
            }
        }

    }
    printf("\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nEnter the element a[%d][%d] for Array 2 : ",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                count2++;
            }
        }
        printf("\n");
    }
    sparse2[0][0]=r;
    sparse2[0][1]=c;
    sparse2[0][2]=count2;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                sparse2[n][0]=i;
                sparse2[n][1]=j;
                sparse2[n][2]=a[i][j];
                n++;
            }
        }

    }
    printf("\nMatrix 1: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",sparse1[i][j]);
        }
        if(i==0)
                printf("\n-------");
        printf("\n");
    }
    printf("\nMatrix 2: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",sparse2[i][j]);
        }
        if(i==0)
                printf("\n---------");
        printf("\n");
    }
    printf("\n\nMultiplied : - \n");
    for(i=1;i<count1+1;i++)
    {
        f=0;
        for(k=1;k<count2+1;k++)
        {

            if((sparse1[i][0]==sparse2[k][1])&&(sparse1[i][1]==sparse2[k][0]))
            {
                f=1;
                break;
            }

        }
        final[i][0]=sparse1[i][0];
        final[i][1]=sparse1[i][1];
        if(f==0)
        {
            final[i][2]=sparse1[i][2];
        }
        else
        {
            final[i][2]=sparse1[i][2]+sparse2[k][2];
        }

    }
    for(i=1;i<count2+1;i++)
    {
        f=0;
        for(j=1;j<count1+1;j++)
        {
            if((sparse2[i][0]==final[j][0])&&(sparse2[i][1]==final[j][1]))
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            final[count1+1][0]=sparse2[i][0];
            final[count1+1][1]=sparse2[i][1];
            final[count1+1][2]=sparse2[i][2];
            count1++;
        }
    }
    final[0][0]=count1;
    final[0][1]=c;
    final[0][2]=count1;
    printf("%d  ",final[0][0]);
    printf("%d  ",final[0][1]);
    printf("%d  ",final[0][2]);
    printf("\n---------\n");
    for(i=1;i<count1+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",final[i][j]);
        }
        printf("\n");
    }
    return 0;
}
