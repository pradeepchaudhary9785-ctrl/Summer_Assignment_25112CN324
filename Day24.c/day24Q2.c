//Write a program to compress a string//
#include <stdio.h>
int main()
{
    char str[100];
    int i, count;
    // Input string
    printf("Enter a string: ");
    gets(str);
    i = 0;
    // Compress string
    while(str[i] != '\0')
    {
        count = 1;
        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);

        i++;
    }
    return 0;
}