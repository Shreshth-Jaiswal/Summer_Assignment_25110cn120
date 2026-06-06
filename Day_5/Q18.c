// Write a program to Check strong number.
#include <stdio.h>
int main()
{
    int n,k,temp,fact=1,sum=0;
    printf("Enter the no. to it is a strong number or not:");
    scanf("%d",&n);
    k=n;
    if(k>0)
    {
        while(k!=0)
        {
            fact=1;
            temp=k%10;
            for(int i=1;i<=temp;i++)
            {
                fact*=i;
            }
            sum+=fact;
            k/=10;
        }
        if(sum==n)
        printf("\n%d is a strong number.",n);
        else
        printf("\n%d isn't a strong number.",n);
    }
    else
    printf("\n%d isn't a strong number.",n);
    return 0;
}