//Write a program to convert decimal to binary//
#include <stdio.h>
int main() {
    int decimal, binary[16], i = 0 ,j;

    printf("Enter a decimal number: ");//input decimal number
    scanf("%d", &decimal);

    while (decimal > 0)//store binary digit
     {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) //Print binary numer in reverse order 
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}