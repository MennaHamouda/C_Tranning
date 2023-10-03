/**
 * C program to find maximum between two numbers using conditional operator
 */

#include <stdio.h>
int main()
{
    int num1,num2;
    int max;
    printf("please enter two number\n");
    scanf("%i%i",&num1,&num2);
    max=(num1>num2)?num1:num2 ;
    printf("the mamimum between %i and %i is %i",num1,num2,max);
}