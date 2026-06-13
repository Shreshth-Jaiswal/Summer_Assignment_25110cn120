// Write a program to Calculate sum of first N natural number.
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number to calculate the sum upto that number :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum+=i+1;
    }
    printf("Sum of first N natural number = %d",sum);
    return 0;
}