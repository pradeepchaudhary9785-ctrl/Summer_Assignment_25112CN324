//Write a program to find maximum occurring character//
#include <stdio.h>
int main()
{
    char str[100], maxChar;
    int i, j, count, maxCount = 0;
    // Input string
    printf("Enter a string: ");
    gets(str);
    // Find maximum occurring character
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
        if(count > maxCount)
        {
            maxCount = count;
            maxChar = str[i];
        }
    }
    printf("Maximum Occurring Character = %c", maxChar);
    printf("\nFrequency = %d", maxCount);
    return 0;
}