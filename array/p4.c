/*
    Write a C program to input elements in array from user and count even and odd elements in array
*/ 
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int array[MAX_SIZE];
    int counter1=0,counter2=0;
    int i,n;
   printf("Enter the size af array\n");
   scanf("%i",&n);
   printf("Enter the element af array\n");
   for (i = 0; i < n ; i++)
   {
        scanf("%i",&array[i]);
   }
   for (i = 0; i < n ; i++)
   {
     if (array[i]%2==0)
     {
        counter1++;
     }
     else
     {
        counter2++;
     }
   }
   printf("the number of even number is %i\n",counter1);
   printf("the number of odd number is %i",counter2);
}