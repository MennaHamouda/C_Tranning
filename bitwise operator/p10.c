/*
  flip all bit in number 
*/

#include <stdio.h>
void main()
{
     int num1,num2,i;
    
     printf("please enter the number \n");
     scanf("%i",&num1);
     num2=~num1;
     printf("the number after flip%i ",num2);
}