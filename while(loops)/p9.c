#include <stdio.h>
int main()
{
    int num ,temp,reverse_number=0;
    printf("please enter number would to reverse\n");
    scanf("%i",&num);
    temp=num; //temp to save number
    while(temp!=0)
    {
        reverse_number=reverse_number*10 +temp%10;
        temp/=10;
    }
    if(reverse_number==num)
    { 
        printf("this is number is palindrome ");
    }
    else
	{
        printf("this is number is not palindrome ");
    }
    
}