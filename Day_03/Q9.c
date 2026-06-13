//Write a program to Check whether a number is prime.
#include <stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter the no. to Check whether it is prime:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        flag=1;
    }
    if(flag==1)
    printf("%d isn't a prime number.",n);
    else if(flag==0)
    printf("%d is a prime number.",n);
    else
    printf("Wrong Input.");
    return 0;
}