//Write a program to find string length withoutstrlen()//
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    // Input string
    printf("Enter a string: ");
    gets(str);
    // Count characters until '\0'
    while(str[i] != '\0')
    {
        i++;
    }
    // Print length
    printf("Length of string = %d", i);
    return 0;
}