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
    printf("the element of array is\n");
     for ( i = 0; i<n; i++)
    {
        printf("%i\n",arr[i]);  //or arr+i
    }
}