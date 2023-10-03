#include<stdio.h>
void main()
{
    int row=1,colum=0;
    int i;
    printf("multiplication table  \n");
    do
    {
       
        for(i=0;i<=12;i++)
        {
            colum=i*row;
            printf("%i",colum);
            printf(" ");
        }
        printf("\n");
        row ++;
    }while (row<13);
}