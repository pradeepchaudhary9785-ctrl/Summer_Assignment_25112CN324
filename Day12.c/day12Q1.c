//Write a program to write function for palindrome //
#include <stdio.h>
int palindrome(int num) {
    int rev=0,temp=num,reminder;
    while(num>0){
        reminder=num%10;
        rev=rev*10+reminder;
        num=num/10;
    }
    return temp==rev;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(palindrome(num)){
        printf("%d is a palindrome",num);
    }
    else{
        printf("%d is not a palindrome",num);
    }
    return 0;
}