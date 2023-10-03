#include<stdio.h>
void main()
{
    int num;
    char ch;
    do{
            printf("please enter the number\n");
            scanf("%i",&num);
            if(num>0)
            {
                if(num==0)
                {
                    printf("the number equal zero\n");
                }
                else
                {
                    printf("number is positive\n");
                }

            }
            else 
            {
                printf("the number is negative\n");
            }
            printf("if you continue press c if you exit prss e");
            scanf("%c",&ch);
    }while(ch=='c');

 }





    
 













