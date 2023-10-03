/*
  write C Program to Remove all Characters in a String Except Alphabe
*/
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i,j;
    printf("Enter string\n");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        while(!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0'))
        {
            for (j= i; str[j] !=0;j++)   //j=i to remove from this itration
            {
                str[j]=str[j+1];
            }
            str[j]=0;  
        }
    }
    printf("string after removing all char expected alphapet\n");
    puts(str);

}