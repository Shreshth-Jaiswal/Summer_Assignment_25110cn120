// Write a program to Check perfect number.
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("\nEnter the no. to check if it is a Perfect number or not:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(n==sum)
    printf("%d is a Perfect number.",n);
    else
    printf("%d isn't a Perfect number.",n);
    return 0;
}