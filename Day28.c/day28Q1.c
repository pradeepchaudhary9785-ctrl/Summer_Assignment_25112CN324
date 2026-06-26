//Write a program to create library management system//
#include <stdio.h>
int main() {
    int bookId;
    char bookName[50], author[50];
    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &bookId);
    printf("Enter Book Name: ");
    scanf("%s", bookName);
    printf("Enter Author Name: ");
    scanf("%s", author);
    // Display details
    printf("\n--- Library Record ---\n");
    printf("Book ID : %d\n", bookId);
    printf("Book Name : %s\n", bookName);
    printf("Author : %s\n", author);
    return 0;
}