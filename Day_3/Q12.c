// Write a program to Find LCM of two numbers.
#include <stdio.h>
int main()
{
    int n1,n2,big=1,small=1,rem=1,hcf=1,lcm=1;
    printf("\nTo Find LCM of two numbers:");
    printf("\nEnter 1st number:");
    scanf("%d",&n1);
    printf("Enter 2st number:");
    scanf("%d",&n2);
    if(n1>n2)
    {
        big=n1;
        small=n2;
    }
    else
    {
        big=n2;
        small=n1;
    }
    while(rem!=0)
    {
        rem=big%small;
        big=small;
        small=rem;
    }
    hcf=big;
    lcm=(n1*n2)/hcf;
    printf("\nLCM of %d and %d is %d",n1,n2,lcm);
    return 0;
} 