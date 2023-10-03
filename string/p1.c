/*
  This program counts the number of vowels, consonants, digits and white-spaces in a string which is entered by the user
*/
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i=0;
    int vowels=0, constant=0,digit=0,white_space=0;
    printf("Enter string\n");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||  
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U')
           {
            vowels++;
           }
        else if(str[i]>='a'&&str[i]<='z' ||str[i]>='A'&&str[i]<='Z')
        {
            constant++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            digit++;
        }
       else if(str[i]=' ')
        {
            white_space++;
        }
    }
    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",constant);
    printf("\nDigits: %d",digit);
    printf("\nWhite spaces: %d", white_space);
}