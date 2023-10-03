/*
    Write a C program to insert element in array at specified position.
*/

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int array[MAX_SIZE];
    int i,n,num,pos;
   printf("Enter the size af array\n");
   scanf("%i",&n);
   printf("Enter the element af array\n");
   // scan element of array
   for (i = 0; i < n ; i++)
   {
        scanf("%i",&array[i]);
   }
   printf("enter the posistion of insirt element\n");
   scanf("%i",&pos);
   printf("enter the insirt element\n");
   scanf("%i",&num);
   if (pos<0 || pos>(n+1))
   {
         printf("the position is not valid\n");
   }
   else
   {
        // shift element from position
        for ( i =n; i >= pos; i--) 
        {
            array[i]=array[i-1];
        }
        // increaze size and put new element in specific position
        n++;
        array[pos-1]=num;
        printf("the element of array after insirtion\n");
        for ( i = 0; i<n; i++)
        {
             printf("%i\n",array[i]);  //or arr+i
        }
    }     
   
}  

