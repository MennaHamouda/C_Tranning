/*
  Write C Program to Concatenate Two Strings
*/
#include <stdio.h>
#include "string.h"
#define MAX_SIZE 100
int main()
{
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    int i,j;
    printf("Enter two string\n");
    gets(str1);
    gets(str2);

   // strcat(str1,str2);
   // printf("the string after concatenate\n");
   //printf("%s",str1);

    for(i = 0; str1[i] != '\0'; ++i);
    for(j = 0; str2[j] != '\0'; ++j, ++i)
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';
    printf("the string after concatenate\n");
     printf("%s",str1);
   
}