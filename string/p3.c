/*
  Write C Program to Find the Length of a String
*/
#include <stdio.h>
#include "string.h"
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i=0,len_string;
    printf("Enter string\n");
    gets(str);
    // len_string=strlen(str);
    // printf("the Length of a String is %i ",len_string);

    while (str[i]!=0)
    {
        i++;
    }
    printf("the Length of a String is %i ",i);
}