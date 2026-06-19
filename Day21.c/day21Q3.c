//Write a program to count vowels and consonants//
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    // Input string
    printf("Enter a string: ");
    gets(str);
    // Traverse string
    while(str[i] != '\0')
    {
        // Check vowels
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' ||
           str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        // Check consonants
        else if((str[i]>='a' && str[i]<='z') ||
                (str[i]>='A' && str[i]<='Z'))
        {
            consonants++;
        }
        i++;
    }
    // Print result
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);
    return 0;
}