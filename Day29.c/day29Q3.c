//Write a program to create menu-driven string operations system//
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    // Input string
    printf("Enter String: ");
    scanf("%s", str);
    // Display results
    printf("Length = %lu\n", strlen(str));
    printf("Uppercase and Lowercase operations can also be added.\n");
    return 0;
}