//Write a program to count set bits in a number //
#include <stdio.h>
int main() {
    int number, count = 0;

    printf("Enter a number: ");//input number
    scanf("%d", &number); 
    while (number > 0) //Count set bits
     {
        if(number%2 == 1) //check if last bit is 1
         {
            count++;
        }
        number = number / 2; //move to next bit
    }

    printf("Number of set bits: %d\n", count);
    return 0;
}