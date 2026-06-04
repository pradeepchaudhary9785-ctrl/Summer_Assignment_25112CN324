//write a program to print armstrong number in a range//
#include<stdio.h>
int main()
{
    int n1,n2,rem,sum=0,temp,i;
    printf("Enter the range (n1 n2):");
    scanf("%d %d",&n1,&n2);
    printf("Armstrong numbers in the range %d to %d are:",n1,n2);
    for(i=n1;i<=n2;i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
            rem=temp%10;//Extract last digit
            sum=sum+rem*rem*rem;//Cube of last digit and add to sum
            temp=temp/10;//Remove last digit
        }
        if(sum==i)
            printf("%d ",i);
    }
    return 0;
}