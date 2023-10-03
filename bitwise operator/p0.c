#include <stdio.h>
void main()
{
  int num;
  printf("please enter the number \n");
  scanf("%i",&num);
  if(num&1==1)
  {
    printf("the lsb is set 1");
  }
  else
  {
     printf("the lsb is 0");
  }

}