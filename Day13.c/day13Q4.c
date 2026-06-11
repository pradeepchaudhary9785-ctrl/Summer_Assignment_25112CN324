//Write a program to count even and odd elements.//
#include<stdio.h>
int main()
{
    int arr[100],n,i,even=0,odd=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even elements is: %d\n",even);
    printf("Number of odd elements is: %d\n",odd);
    return 0;
}