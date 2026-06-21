//Write a program to find first repeating character//
#include <stdio.h>
int main()
{
    char str[100];
    int i, j, count;
    // Input string
    printf("Enter a string: ");
    gets(str);
    // Find first repeating character
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                break;
            }
        }
        if(count > 0)
        {
            printf("First Repeating Character = %c", str[i]);
            break;
        }
    }
    return 0;
}