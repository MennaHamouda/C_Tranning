/*
    C Programm to scan element of array and print negative number
*/
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i,n;
    printf("Enter the size of array\n");
    scanf("%i",&n);
    printf("Enter the element of array\n");
    for ( i = 0; i<n; i++)
    {
        scanf("%i",&arr[i]);  //or arr+i

    }
    for ( i = 0; i <n; i++)
    {
        if(arr[i]<0)
        {
            printf("the negative element is %i",arr[i]);
        }
        
    }
}