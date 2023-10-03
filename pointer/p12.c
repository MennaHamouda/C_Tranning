/*Write a C Program to Return multiple value from function - using pointers*/

#include <stdio.h>
#define MAX_SIZE 100

/**
 * Function to get minimum and maximum element in array.
 *
 * @numbers   Array in which we need to find max and min.
 * @size      Size of the array.
 * @min       Pointer to integer where minimum element is to be stored.
 * @max       Pointer to integer where maximum element is to be stored.
 */
void GIT_MAXMIN(int *number,int size_array,int *min ,int *max)
{
    int i;
    *min=*(number);      // min=*(number+0);  access first element 
    *max=*(number);
    for ( i = 0; i < size_array; i++)
    {
        // check minmum number 
        if(*(number+i)<*min)
        {
            *min=*(number+i);
        }

        //check maximum number
        if(*(number+i)>*max)
        {
            *max=*(number+i);
        }   
    }
}
void main()
{
    int arr[MAX_SIZE],n,i;
    int max,min;
    printf("Enter the number element of array\n");
    scanf("%i",&n);
    printf("Enter the element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[i]);
    }
     GIT_MAXMIN(arr,n,&min ,&max);
     printf(" the maximum element in array is %i \n",max);
     printf(" the minmum element in array is %i",min);
}