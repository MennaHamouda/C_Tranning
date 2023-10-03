#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i,n,sum=0;
    printf("Enter the size of array\n");
    scanf("%i",&n);
    printf("Enter the element of array\n");
    for ( i = 0; i<n; i++)
    {
        scanf("%i",&arr[i]);  //or arr+i
    }
     for ( i = 0; i<n; i++)
    {
        sum+=arr[i];  
    }
    printf("the sum of element  %i ",sum);
}