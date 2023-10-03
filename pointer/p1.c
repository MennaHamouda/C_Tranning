/*Write C Program to Find 2 Elements in the Array such that Difference between them is Largest using pointers */

#include <stdio.h>
# define MAX_SIZE 100
int MAX_DIFFERENT(int *ptr,int size_array)
{   
    int i,j, max_different  ;
    max_different = ptr[0] - ptr[1] ;  //*(ptr+0)-*(ptr+1)
     for ( i = 0; i < size_array; i++)
     {
        for ( j = i+1; j < size_array; j++)
        {
            if (ptr[j]-ptr[i] >max_different)
            {
                max_different=ptr[j]-ptr[i];
            }
        }
     }
     return  max_different;
}
void main()
{
    int arr[MAX_SIZE]={0};
    int n,i,result;
    printf("Enter number of element of array\n");
    scanf("%i",&n);
    printf("Enter the element of array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%i",arr+i);        //  scanf("%i",&arr[i]);
    }
result=MAX_DIFFERENT(arr,n);
printf(" the maximum diffrent is %i",result);
}