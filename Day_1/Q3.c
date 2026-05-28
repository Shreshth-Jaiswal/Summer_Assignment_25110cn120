// Write a program to Find factorial of a number.
#include <stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the no. to find the factorial of it:");
    scanf("%d",&n);
    if(n>16)
    {
        printf("The given no. is too large to find its Factorial.");
        goto end;
    }
    if(n<0)
    {
        printf("Wrong Input");
        goto end;
    }
    i=n;
    while(i>0)
    {
        fact*=i;
        i--;
    }
    printf("Factorial of the %d = %d",n,fact);
    end :
    return 0;
}