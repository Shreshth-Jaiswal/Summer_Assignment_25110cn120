// Write a program to Find nth Fibonacci term.
#include <stdio.h>
int main()
{
    int n=0,first=0,sec=1,temp=0;
    printf("Enter the no. n to find nth Fibonacci term:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        temp=first+sec;
        first=sec;
        sec=temp;
    }
    printf("%d",temp-first);
    return 0;
}