/*
   Write C program to merge two arrays into third array:
*/

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
   int a[MAX_SIZE],b[MAX_SIZE],c[MAX_SIZE],n1,n2,n3,i;

   // take size from user and element
   printf("Enter the size af array1\n");
   scanf("%i",&n1);
   printf("Enter the element af array1\n");
   for (i = 0; i < n1; i++)
   {
        scanf("%i",&a[i]);
   }
   printf("Enter the size af array2\n");
   scanf("%i",&n2);
   printf("Enter the element af array2\n");
   for (i = 0; i < n2; i++)
   {
        scanf("%i",&b[i]);
   }

   //merge two array in third array 
   n3=n1+n2;
   for (i = 0; i < n1; i++)
   {
        c[i]=a[i];
   }
   for (i = 0; i < n2; i++)
   {
        c[i+n1]=b[i];
   }
   printf("the array after mrged\n");
   for ( i = 0; i<n3; i++)
   {
         printf("%i\n",c[i]);  
   }
}

