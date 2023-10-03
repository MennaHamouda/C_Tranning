/*
   Write C Program to Add Two Matrix Using Multie dimensional Arrays
*/
#include <stdio.h>
int main()
{
      int a[100][100],b[100][100],mul[100][100];
      int r,c,i,j;
      printf("Enter number of rows (between 1 and 100): ");
      scanf("%d", &r);
      printf("Enter number of columns (between 1 and 100): ");
      scanf("%d", &c);
      printf("Enter the element of first array\n");
      for(i=0; i<r; i++)
        for(j=0; j<c; j++)
       {
            scanf("%d",&a[i][j]);
       }
     printf("Enter the element of second array\n");
     for(i=0; i<r; i++)
        for(j=0; j<c; j++)
       {
            scanf("%d",&b[i][j]);
       }
     for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            mul[i][j]=a[i][j]*b[i][j];
        }
     printf("\n multiplication of two matrix is: \n\n");

     for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("%d   ",mul[i][j]);

            if(j==c-1)
            {
                printf("\n\n");
            }
        }
}