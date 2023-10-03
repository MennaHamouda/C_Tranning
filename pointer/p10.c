/*Write a C Program to copy string using pointer*/

#include <stdio.h>
#define MAX_SIZE 100
void main()
{
    char text1[MAX_SIZE],text2[MAX_SIZE];
    char *str1 =text1;
    char *str2 =text2;
    int i;
    printf("Enter the string\n");
    gets(text1);
    for(i=0;str1[i]!=0;i++)
    {
        str2[i]=str1[i];         // create pointer hold baise address of array deal with pointer as array
    }
    str2[i]=0;
     printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
}
