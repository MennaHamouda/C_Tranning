/*Write a C Program to find length of string using pointer*/

#include <stdio.h>
#define MAX_SIZE 100
void main()
{
    char text[MAX_SIZE];
    char *str=text;
    int len=0;
    printf("Enter the string \n");
    gets(text);
    while((*str)!=0)
    {
        len++;
        str++;
    }
    printf("the length of string is %i",len);
}