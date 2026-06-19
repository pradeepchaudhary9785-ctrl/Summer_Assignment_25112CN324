//Write a program to convert loercase to uppercase//
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    // Input string
    printf("Enter a string: ");
    gets(str);
    // Convert lowercase to uppercase
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }
    // Print uppercase string
    printf("Uppercase String = %s", str);
    return 0;
}