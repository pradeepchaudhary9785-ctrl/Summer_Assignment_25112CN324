//Write a program to create mini library system
#include <stdio.h>
int main() {
    int bookId;
    char bookName[30];
    char author[30];
    // Input details
    printf("Enter Book ID: ");
    scanf("%d", &bookId);
    printf("Enter Book Name: ");
    scanf("%s", bookName);
    printf("Enter Author Name: ");
    scanf("%s", author);
    // Display details
    printf("\n----- Library Record -----\n");
    printf("Book ID     : %d\n", bookId);
    printf("Book Name   : %s\n", bookName);
    printf("Author Name : %s\n", author);
    return 0;
}
