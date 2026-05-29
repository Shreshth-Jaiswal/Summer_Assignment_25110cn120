//Write a program to Find sum of digits of a number.
#include <stdio.h>
int main()
{
    int n,sum=0,temp=0,k;
    printf("Enter the no. to get the sum of the digits:");
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        temp=n%10;
        sum+=temp;
        n=n/10;
    }
    if(sum<0)
    sum=sum*(-1);
    printf("Sum of digits of %d = %d",k,sum);
}
