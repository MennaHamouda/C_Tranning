/*
  Write C Program to Copy String Without Using strcpy()
*/
#include <stdio.h>
#include "string.h"
#define MAX_SIZE 100
int main()
{
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    int i;
    printf("Enter two string\n");
    gets(str1);
    gets(str2);
    for(i = 0; str1[i] != '\0'; ++i);
    {
        str2[i] = str1[i];
    }
     str2[i] = '\0';
    printf("the string after copy\n");
    printf("%s",str2);

}