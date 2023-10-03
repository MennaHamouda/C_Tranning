/*Write a C program to input elements in array and search an element in array using pointers*/


#include <stdio.h>
#define MAX_SIZE 100
void main()
{
    int arr[MAX_SIZE],*ptr=arr,n,i,search;
    printf("Enter the number of  element of array");
    scanf("%i",&n);
    printf("Enter the element of array");
    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);  //scanf("%i",ptr+i);
    }
    printf("Enter the element to search \n");
    scanf("%i",&search);
    for(i=0;i<n;i++)
    {
        if(search==*(ptr+i))
        printf("%i is founded in position %i",search,i+1);
    }
}