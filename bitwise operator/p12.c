/*
rotate right and left
*/
#include <stdio.h>
void main()
{
   int num1,bit;
   int num2;
   printf("please enter the numberand bit of rotate \n");
   scanf("%i%i",&num1,&bit);
//   num2=(num1>>(8-bit))|(num1<<bit);
//  printf("the num before rotate left %i/n number after rotate left %i",num1,num2);


    num2=(num1<<(8-bit))|(num1>>bit);
    printf("the num before rotate right %i/n number after rotate right %i",num1,num2);
}