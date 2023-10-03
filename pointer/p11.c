/*Write a C Program to find reverse of a string using pointers*/

#include <stdio.h>
#define MAX_SIZE 100
void main()
{
    char str[MAX_SIZE],rev[MAX_SIZE];
    char *s=str,*r=rev;
    int len=0;
    printf("Enter any string\n");
    gets(str);
    while(*(s++))
    {
        len++;
    }
    s--;      // to point the element upper null
    while(len>=0)
    {
        *(r++)=*(--s);
        len--;
    }
    printf("the string before reverse  %s\n",str);
     printf("the string after reverse  %s",rev);
}