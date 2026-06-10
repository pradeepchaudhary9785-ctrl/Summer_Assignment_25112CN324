//Write a program to write function for Armstrong//
#include <stdio.h>
#include <math.h>

int armstrong(int num) {
    int sum = 0, temp = num, digit;
    while (temp > 0) {
        digit = temp % 10;
        sum =sum + digit * digit * digit;//
        temp=temp/10;
    }
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num)) {
        printf("%d is an Armstrong number", num);
    } else {
        printf("%d is not an Armstrong number", num);
    }
    return 0;
}