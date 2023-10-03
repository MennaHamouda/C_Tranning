/*
check the number even or odd
*/
#include <stdio.h>
void main()
{
   int num;
   printf("please enter the number \n");
   scanf("%i",&num);
   if(num&1==1)
   {
     printf("the number is odd");
   }
   else
   {
      printf("the number is even");
   }
}