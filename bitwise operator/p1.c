/*
program to check Most Significant Bit (MSB) of a number using bitwise operator
check the number is positive or negative
*/

#include <stdio.h>
void main()
{
    int num;
    printf("please enter the number \n");
    scanf("%i",&num);
     if(((num&(1u<<31))>>31)==1   //proooooooomotion 
     {
       printf(" the number is negative or msb is 1");

     }
     else
     {
         printf(" the number is positive or msb is 0");

     }

}