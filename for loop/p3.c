#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter the number (To be calculated)\n");
    scanf("%i",&n);
    for(i=0;i<=10;i++)
    {
        printf("%ix%i=%i",i,n,i*n);
        printf("\n");
    }
}