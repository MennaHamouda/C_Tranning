/*
    Write a C program to findlargest and second largest element in an array.
*/

#include<stdio.h>
#define MAX_SIZE 100
int main()
{  int array[MAX_SIZE];
   int largest1=0, largest2=0 ,temp;
   int i,n;
   printf("Enter the size af array\n");
   scanf("%i",&n);
   printf("Enter the element af array\n");
   for (i = 0; i < n ; i++)
   {
        scanf("%i",&array[i]);
   }
   largest1=array[0];
   largest2=array[1];
   if(largest1<largest2)
   {
        temp=largest1;
        largest2=largest1;
        largest2=temp;
   }
   for (i = 0; i < n ; i++)
   {
        if(array[i]>largest1)
        {   largest2=largest1;
            largest1=array[i];
        }
        else if (array[i]>largest2)
        {
            largest2=array[i];
        }  
    }
    printf("First largest = %d\n", largest1);
    printf("Second largest = %d", largest2);
}
