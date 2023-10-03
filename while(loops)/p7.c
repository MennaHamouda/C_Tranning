#include <stdio.h>
int main()
{
    int num,flag=0;
    int i;
    printf("please enter the number\n");
    scanf("%i",&num);
    if(num==0 || num==1 )
    {
        flag=1;
    }
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%i is a prime number",num );
    }
    else
    {
        printf("%i is not a prime number",num );

    }
}