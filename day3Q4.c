//Write a program to find LCM of two number //
#include <stdio.h>
int main() {
    int num1, num2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    lcm = (num1 > num2) ? num1 : num2; // Start with the greater number
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break; // Found the LCM
        }
        lcm++; // Increment LCM candidate
    }
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}