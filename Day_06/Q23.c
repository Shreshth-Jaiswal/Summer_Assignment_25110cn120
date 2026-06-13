//Write a program to Count set bits in a number.
#include <stdio.h>

int main()
{
    int num, temp, count=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        temp=num%2;
        if(temp==1)
        count++;
        num/=2;
    }

    printf("Number of set bits = %d", count);
    return 0;
}