/*
toggle specific bit in number
*/
#include <stdio.h>
void main()
{
   int num1,num2 ,bit;
   printf("please enter the number and the bit of check\n");
   scanf("%i%i",&num1,&bit);
   printf("the number before toggle bit %i",num1);
   num2=num1^(1<<bit);
   printf("the number before toggle bit %i",num2);
}
