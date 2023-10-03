#include <stdio.h>
int main()
{

    int num,counter=0;
    printf("Enter the number\n ");
    scanf("%i",&num);
    while(num!=0)
    {
        num/=10;
        counter++;
    }
    printf("the number of digit is%i\n",counter);

}