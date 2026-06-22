//Write a program to check whether one string is rotation of another//
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], temp[200];
    // Input strings
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    // Copy first string into temp
    strcpy(temp, str1);
    // Concatenate first string again
    strcat(temp, str1);
    // Check rotation
    if(strlen(str1) == strlen(str2) &&
       strstr(temp, str2) != NULL)
    {
        printf("String is Rotation");
    }
    else
    {
        printf("String is Not Rotation");
    }
    return 0;
}