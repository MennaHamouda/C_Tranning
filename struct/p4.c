/*Write a C Program to Return multiple value from function -using structure*/

#include <stdio.h>
#define MAX_size 100

typedef struct
{
    int min;
    int max;
}MinMax;


/**
 * Function to find minimum and maximum value in array.
 *
 * @returns     The function returns a struct object containing
 *              minimum and maximum value in array.
 */

MinMax getMin_Max (int*array,int size_array)
{
    int i;
    int min,max;
    min=*(array+0);
    max=*(array+0);
    for(i=0;i<size_array;i++)
    {
        if(*(array+i)<min)
        {
            min=*(array+i);
        }
    
        if(*(array+i)>max)
        {
            max=*(array+i);
        }
    }
    // Copy minimum and maximum vaue to return object.
    MinMax arrayMinMax;
    arrayMinMax.max=max;
    arrayMinMax.min=min;

    return arrayMinMax;
}
void main()
{
    int array[MAX_size],n,i;
    printf("Enter number of element of array\n");
    scanf("%i",&n);
    printf("Enter element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%i",&array[i]);
    }
    MinMax arrayMinMax;
    arrayMinMax= getMin_Max (array,n);
    
    printf("Minimum value in array : %d \n", arrayMinMax.min);
    printf("Maximum value in array : %d \n", arrayMinMax.max);
}
