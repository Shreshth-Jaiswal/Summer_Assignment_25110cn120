//Write a program to Find x^n without pow().
#include<stdio.h>
int main()
{
    int x,n,result=1;

    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter n:");
    scanf("%d",&n);

    while(n!=0)
    {
        result*=x;
        n--;
    }

    printf("Result=%d",result);
    return 0;
}