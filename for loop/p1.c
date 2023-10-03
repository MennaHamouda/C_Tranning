#include <stdio.h>
void main()
{
    int i,sum=0;
    printf("the first 10 natural numbers are\n");
    for(i=0;i<=10;i++)
    {
        printf("%i  ",i);
        sum+=i;
    }
        printf("\n");
        printf("the sum is %i", sum);
}