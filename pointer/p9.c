/*Write a C Program to compare two strings using pointers*/

#include <stdio.h>
#define MAX_SIZE 100
/**
 * Compares two strings lexicographically. 
 */
int comp(char *str1,char *str2)
{
    while((*str1==0 && *str2==0 )&&(*str1==*str2)) 
    {
        str1++;
        str2++;
    }
    return *str1-*str2;
}
void main()
{
    char str1[MAX_SIZE],str2[MAX_SIZE];
    int res;
    printf("Enter two string\n");
    gets(str1);
    gets(str2);
    res=comp(str1,str2);
    if(res==0)
    {
        printf("the two string is equal\n");
    }
    else if(res<0)
    {
        printf("the first string is smaller than second \n");
    }
    else
    {
         printf("the first string is greater  than second \n");
    }
}