#include <stdio.h>
int main()
{   
    int i, num;
    printf("Print all even numbers till: ");
    scanf("%d", &num);
    printf("Even numbers from 1 to %d are: \n", num);

   for(i=0;i<=num;i=i+2)
       {
          printf("%i\n",i);
        }

/*
   for(i=0;i<=num;i++)
   {
        if(i%2==0)
        {
            printf("%i\n",i);
        }
   }
}
*/