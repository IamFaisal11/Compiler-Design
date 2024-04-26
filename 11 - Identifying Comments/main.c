// Write a program in C to check whether a statement entered is a comment or not!
// // This is a comment
// /* This is a multi-line comment */


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter a statement: ");
    gets(str);

    length = strlen(str);

    if (str[0] == '/' && str[1] == '/')
    {
        printf("The statement is a single line comment.\n");
    }

 
    else if ((str[0] == '/' && str[1] == '*') && (str[length - 2] == '*' && str[length - 1] == '/'))
    {
        printf("The statement is a multi-line comment.\n");
    }

    else
    {
        printf("The statement is not a comment.\n");
    }
    return 0;
}