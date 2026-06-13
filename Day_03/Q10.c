//Write a program to Print prime numbers in a range.
#include <stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter the no. to Print prime numbers in a range from 1:");
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        flag=0;
        for(int i=2;i<=j/2;i++)
        {
            if(j%i==0)
            flag=1;
        }
        if(flag==0)
        printf("%d,",j);
    }
    return 0;
}