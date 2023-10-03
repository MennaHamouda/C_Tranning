#include <stdio.h>
int main()
{
    int num,power,result=1;
    printf("Enter number and power\n");
    scanf("%i%i",&num,&power);
    while (power!=0)
    {
        result*=num;
        power--;
    }
    printf("the result is%i ",result);

}