// Write a program to Print factors of a number.
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("\nEnter the no. to Print factors of that number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("%d,",i);
    }
    return 0;
}