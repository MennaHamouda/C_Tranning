/*
find lowest order set bit in number.
*/
#include <stdio.h>
#define SIZE_INT 32
void main()
{
   int num,i,order=-1;
   printf("please enter the number \n");
   scanf("%i",&num);
   // Itration over eash bit in number 
   for(i=31;i<SIZE_INT;i--)
   {
      if(((unsigned int)num>>(i-31))&1)
      {
         order=i ;
      }
   }
   if(order!=-1)
   {
       printf("the highest bit set is %i",order);
   }
   else
   {
       printf("no bit is set in the number");
   }
}
