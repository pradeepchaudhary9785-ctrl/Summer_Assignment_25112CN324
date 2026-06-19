//Write a program to reverse a string//
#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int i, j = 0, len = 0;
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
    // Print reversed string
    printf("Reversed String = %s", rev);
    return 0;
}