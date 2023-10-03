#include <stdio.h>
int main()
{
    int num;
    int temp=0;
    printf("please enter the number\n");
    scanf("%i",&num);

    // reverse number in temp
    while(num!=0)
    {
        temp=(temp*0)+(num%10);
        num/=10;
    }
    while (temp!=0)
    {
                switch(temp % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        temp = temp/ 10;
    }
    
}