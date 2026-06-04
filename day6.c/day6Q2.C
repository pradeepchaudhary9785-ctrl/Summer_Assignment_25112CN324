//Write a program to convert binary to decimal//
#include <stdio.h>
int main() {
    int binary[16], decimal = 0, i = 0, j;

    printf("Enter a binary number (up to 16 bits): ");//input binary number
    for (i = 0; i < 16; i++) {
        scanf("%d", &binary[i]);
    }

    for (j = 0; j < i; j++) //Calculate decimal value
     {
        decimal += binary[j] * (1 << (i - j - 1));
    }

    printf("Decimal representation: %d\n", decimal);

    return 0;
}