// Write a program to Convert decimal to binary.
#include <stdio.h>
int main()
{
    float decimal, copy;
    int binary1=0, binary2=0;
    int temp, increase_digit;

    printf("Enter a decimal no. to Convert it into a binary no.: ");
    scanf("%f", &decimal);

    copy = decimal;

    // Integer part
    increase_digit=1;
    int whole=(int)decimal;
    while (whole!=0)
    {
        temp=whole%2;
        binary1+=temp*increase_digit;
        increase_digit*=10;
        whole/=2;
    }

    // Fractional part
    decimal=copy-(int)copy;
    increase_digit=1;
    for (int i=0;i<5;i++)                    // 5 binary digits after decimal
    {
        decimal*=2;
        temp=(int)decimal;
        binary2=binary2*10+temp;
        decimal-=temp;
        if (decimal==0)
        break;
    }
    printf("%d.%d", binary1, binary2);
    return 0;
}