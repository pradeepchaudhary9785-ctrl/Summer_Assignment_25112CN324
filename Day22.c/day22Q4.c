//Write a program to remove spaces from string//
#include <stdio.h>
int main()
{
    char str[100], newStr[100];
    int i = 0, j = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);
    // Remove spaces
    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            newStr[j] = str[i];
            j++;
        }
        i++;
    }
    newStr[j] = '\0';
    // Print result
    printf("String after removing spaces:\n");
    printf("%s", newStr);
    return 0;
}