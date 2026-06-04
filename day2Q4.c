//Write a program to check whether a number is palindrome//
#include <stdio.h>

int main() {
    int num, temp, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if (temp == rev) {
        printf("%d is a palindrome.\n", temp);
    } else {
        printf("%d is not a palindrome.\n", temp);
    }

    return 0;
}