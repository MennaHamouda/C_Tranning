
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    (ch>='a' && ch<'z')|| (ch>='A' && ch<'Z') ? printf("the character is alphapet") : printf("the character is not alphapet") ;
    
}