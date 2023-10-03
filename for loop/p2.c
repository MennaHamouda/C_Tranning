#include <stdio.h>
void main()
{
    int i, n,sum=0;
    float avrage;
    printf("Enter ten number\n");
 
       for(i=0;i<=10;i++)
    {
        scanf("%i",&n);
        sum+=n;
    }
        printf("the sum is %i", sum);
        avrage=sum/10;
        printf("the sum is %i", avrage);
}