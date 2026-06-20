//Write a program to find character frequency//
#include <stdio.h>
int main()
{
    char str[100], ch;
    int i = 0, count = 0;
    // Input string
    printf("Enter a string: ");
    gets(str);
    // Input character to search
    printf("Enter character to find frequency: ");
    scanf("%c", &ch);
    // Count frequency
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }
        i++;
    }
    printf("Frequency of '%c' = %d", ch, count);
    return 0;
}