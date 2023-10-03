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
        scanf("%i",&arr[i]);  
    }
    printf("\n");
    for ( i = 0; i<n; i++)
    {
        if(arr[i+1]!=arr[i]+1) 
        {
            printf("the missing element in array is %i",arr[i]+1);
            break;
        }
    }

}