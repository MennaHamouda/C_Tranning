
#include <stdio.h>
void main()
{
   int num,bit;
   printf("please enter the number and the bit of check\n");
   scanf("%i%i",&num,&bit);
   if(((num&(1<<bit))>>bit)==1)
   {
     printf(" the bit is set 1");
   }
   else
   {
     printf(" the bit is 0");
   }
}
