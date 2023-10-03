/*
  scan number and count number of ones and zeros 
*/

#include <stdio.h>
void main()
{
     int num,i;
     int ones=0,zeros=0;
     printf("please enter the number \n");
     scanf("%i",&num);

     for(i=0;i<32;i++)
     { 
        if((num>>i)&1==1)
        {
           ones++;
        }
        else
        {
            zeros++;
        }
     }

     printf("the number of ones is %i\n",ones);
     printf("the number of zeros is %i\n",zeros);
     
}