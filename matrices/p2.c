/*
   Write C Program to Find Transpose of a Matrix
*/
#include <stdio.h>
int main()
{
      int a[100][100],t[100][100];
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
      printf("the matrix is\n");
      for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }
     for(i=0; i<r; i++)
        for(j=0; j<c; j++)
       {
           t[j][i]= a[i][j];
       }

     printf("\n the matrix after transpose: \n\n");

     for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("%d   ",t[i][j]);

            if(j==r-1)
            {
                printf("\n\n");
            }
        }

}