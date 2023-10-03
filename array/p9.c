#include<stdio.h>
#define MAX_SIZE 100
int main()

{
   int arr[MAX_SIZE];
   int i,n;
   printf("Enter the size af array\n");
   scanf("%i",&n);
   printf("Enter the element of array\n");
   for (i = 0; i < n; i++)
   {
        scanf("%i",&arr[i]);
   }
   printf("the element of array is\n");
    for ( i = 0; i<n; i=i+2)
    {
        printf("%i\n",arr[i]);  
    }
}