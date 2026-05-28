// Write a program to Count digits in a number.
#include <stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the no. to count its digit: ");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        i=i/10;
        flag++;
    }
    printf("Number of digits in %d = %d",n,flag);
    return 0;
}