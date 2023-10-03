#include <stdio.h>
void main()
{
 int x,y;
  printf("please enter two number \n");
  scanf("%i%i",&x,&y);
  x=x^y;
  y=x^y;
  x=x^y;
  printf("two number after swap\n %i\n %i",x,y);

}
