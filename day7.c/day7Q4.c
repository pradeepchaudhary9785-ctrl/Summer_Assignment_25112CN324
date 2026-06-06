//Write a program to recursive reverse number.//
#include<stdio.h>
#include<math.h>

int reverseNumber(int n)//Recursive function to reverse a number//
 {
    if (n == 0)//Base case//
        return 0;
    else
        return (n % 10) * pow(10, (int)log10(n)) + reverseNumber(n / 10);//Recursive call//
}

int main() {
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    printf("Reversed number is: %d\n", reverseNumber(num));//Print the reversed number result//

    return 0;
}