/*
 Write c program to Find the Frequency of Characters
*/
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i,frq=0;
    char ch;
    printf("Enter string\n");
    gets(str);
    printf("Enter a character to find the frequency: ");
    scanf("%c",&ch);
    for(i=0;str[i]!=0;i++)
    {
        if(ch==str[0])
        {
             printf("the frequancy of %c is 0",ch ); 
             break;
        }
        else if(ch==str[i])
        {
            frq++;
        }
    }
    printf("the frequancy of %c is %d",ch ,frq);
}