#include <stdio.h>
int main()
{
    int num,first_digit,last_digit,sum;
    printf("please enter number to sum first and last digit\n");
    scanf("%i",&num);
    last_digit=num%10;
    
    first_digit=num;
    while (num>=10)
    {
        num=num/10;
        first_digit=num;
    }
    sum=first_digit+last_digit;
    printf("the sum of first and last digit is %i\n",sum);
}