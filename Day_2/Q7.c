//Write a program to Find product of digits.
#include <stdio.h>
int main()
{
    int n,k,temp=0,product=1;
    printf("Enter the no. to find the product of digits:");
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        temp=n%10;
        product*=temp;
        n/=10;
    }
    if(product<0)
    product=product*(-1);
    printf("The product of the digits %d = %d",k,product);
    return 0;
}