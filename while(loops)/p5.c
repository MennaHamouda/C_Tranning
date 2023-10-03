#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("please enter number to sum the digit \n");
    scanf("%i",&num);
    while (num!=0)
    {
        sum+=num%10; //put least digit in sum
        num=num/10;  // remove least digit from number
    }
    printf("the sum of digit is %i",sum);
}