// Write a program to Reverse a number.
#include <stdio.h>
int main()
{
    int n,k,i=0,temp=0,rev=0;
    printf("Enter the no. to get its reverse:");
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n/=10;
    }
    printf("Reverse of %d = %d",k,rev);
    return 0;
}