#include<stdio.h>
#define MAX_SIZE 100
int main()

{
   int arr[MAX_SIZE];
   int i,n;
   int baby ,attending,adult;

   printf("Enter the size af array\n");
   scanf("%i",&n);
   printf("Enter the element of array\n");
   for (i = 0; i < n; i++)
   {
        scanf("%i",&arr[i]);
   }
   while (i<15)
   {
        if(arr[i]>=0 && arr[i]<=5)
        baby++;
        else if(arr[i]>5 && arr[i]<=17)
        attending++;
        else if(arr[i]>17)
        adult++;
        i++;
   }
    printf("\n numbers of Still a baby:%d ",baby);
    printf("\n numbers of Attending school :%d ",attending);
    printf("\n numbers of dult life :%d ",adult);
}