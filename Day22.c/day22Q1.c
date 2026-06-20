//Write a program to check palindrome string//
#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int i, j = 0, len = 0, flag = 1;
    // Input string
    printf("Enter a string: ");
    gets(str);
    // Find length
    while(str[len] != '\0')
    {
        len++;
    }
    // Reverse string
    for(i = len - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    // Compare original and reverse strings
    for(i = 0; i < len; i++)
    {
        if(str[i] != rev[i])
        {
            flag = 0;
            break;
        }
        }
    if(flag == 1)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");
    return 0;
}