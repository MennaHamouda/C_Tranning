/*
    c programm to reverse number
*/
#include <stdio.h>
int main()
{
    int num ,temp=0;
    printf("please enter number would to reverse\n");
    scanf("%i",&num);
    while(num!=0)
    {
        temp=temp*10 + num%10;
        num/=10;
    }
    printf("the reverse of number is %i",temp);
}