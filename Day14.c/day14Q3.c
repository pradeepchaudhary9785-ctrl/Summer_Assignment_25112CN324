//Write a program to second largest element//
#include<stdio.h>
int main()
{
    int n, i, largest, second_largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)//input the elements of the array
    {
        scanf("%d", &arr[i]);
    }
    largest = second_largest = arr[0];
    for(i = 1; i < n; i++)//algorithm to find the second largest element
    {
        if(arr[i] > largest)//if the current element is greater than the largest element
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest)//if the current element is greater than the second largest element and not equal to the largest element
        {
            second_largest = arr[i];
        }
    }
    if(second_largest == largest)//if there is no second largest element in the array
    {
        printf("There is no second largest element in the array\n");
    }
    else
    {
        printf("The second largest element in the array is %d\n", second_largest);
    }
    return 0;
}