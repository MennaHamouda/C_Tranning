/*
   deleate element from array
*/

#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i,n,pos;
    printf("Enter the size af array1\n");
    scanf("%i",&n);
    printf("Enter the element af array1\n");
    for (i = 0; i < n; i++)
    {
        scanf("%i",&arr[i]);
    }
    printf("the posetion of element want to delete\n");
    scanf("%i",&pos);
    if(pos>n || pos<0)
    {
        printf("the position isnot valid\n");
    } 
    else 
    {
        for ( i =pos-1; i<n-1; i++)
        {
             arr[i]=arr[i+1];
        }
    } 
    n--;
    printf("the element of array after deleate specific element\n");
    for ( i = 0; i<=n-1 ; i++)
    {
        printf("%i\n",arr[i]);  
    }
} 