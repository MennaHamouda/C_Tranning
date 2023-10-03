#include<stdio.h>
void main()
{
    int sum=0,num,i;
     printf("PLEASE ENTER MANY NUMBER NUMBER \n");
    do
    {
       
        scanf("%i",&num);
        sum+=num;
    }while(num!=0);
    
     printf("the sum is %i",sum);
}