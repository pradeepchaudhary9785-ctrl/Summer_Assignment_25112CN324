//Write a program to count words in a sentence//
 #include <stdio.h>
int main()
{
    char str[100];
    int i = 0, words = 1;
    // Input sentence
    printf("Enter a sentence: ");
    gets(str);
    // Count spaces
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            words++;
        }
        i++;
    }
    printf("Total Words = %d", words);
    return 0;
}