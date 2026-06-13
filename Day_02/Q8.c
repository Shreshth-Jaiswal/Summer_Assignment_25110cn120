// Write a program to Check whether a number is palindrome.
#include <stdio.h>
int main()
{
    int n,k,i=0,temp=0,rev=0;
    printf("Enter the no. to Check whether it is palindrome or not:");
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n/=10;
    }
    if(k==rev && k>0)
    printf("%d is palindrome",k);
    else
    printf("%d isn't palindrome",k);
    return 0;
}