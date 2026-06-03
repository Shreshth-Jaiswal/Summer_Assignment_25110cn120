// Write a program to Find GCD of two numbers.
#include <stdio.h>
int main()
{
    int n1,n2,first,sec,rem;
    printf("\nTo Find GCD of two numbers:");
    printf("\nEnter 1st number:");
    scanf("%d",&n1);
    printf("Enter 2st number:");
    scanf("%d",&n2);
    first=n1;
    sec=n2;
    while(sec!=0)
    {
        rem=first%sec;
        first=sec;
        sec=rem;
    }
    printf("GCD of %d and %d is %d",n1,n2,first);
    return 0;
}