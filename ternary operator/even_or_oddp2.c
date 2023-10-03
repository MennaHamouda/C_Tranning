/* 
   check number is odd or even
*/
#include <stdio.h>
int main()
{
    int num;
    printf("please enter the number\n");
    scanf("%i",&num);
    (num&1==1) ? printf("the number is odd") : printf("the number is even") ;   //or (nun%2==0) is even
}



