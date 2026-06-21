//Write a program to find first non-repeating character//
#include <stdio.h>
int main()
{
    char str[100];
    int i, j, count;
    // Input string
    printf("Enter a string: ");
    gets(str);
    // Find first non-repeating character
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            printf("First Non-Repeating Character = %c", str[i]);
            break;
        }
    }
    return 0;
}