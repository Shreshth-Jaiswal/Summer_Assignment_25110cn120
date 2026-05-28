// Write a program to Print multiplication table of a given number.
#include <stdio.h>
int main()
{
    int n,t;
    printf("Enter the no. to get the multiplication table:");
    scanf("%d",&n);
    printf("Enter the term to get the multiplication table till that term:");
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}