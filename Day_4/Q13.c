// Write a program to Generate Fibonacci series.
#include <stdio.h>
int main()
{
    int n=0,first=0,sec=1,temp=0;
    printf("Enter the term upto you wanna print the Fibonacci Series:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d,",first);
        temp=first+sec;
        first=sec;
        sec=temp;
    }
    return 0;
}