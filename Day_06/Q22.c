//Write a program to Convert binary to decimal.
#include <stdio.h>
int main()
{
    int binary, temp;
    int decimal=0;
    int increase_digit=1;

    printf("Enter a binary number: ");
    scanf("%d",&binary);

    while(binary != 0)
    {
        temp=binary%10;
        decimal+=temp*increase_digit;
        increase_digit*=2;
        binary/=10;
    }

    printf("Decimal=%d",decimal);
    return 0;
}