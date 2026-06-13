// Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
int main()
{
    int n1,n2,n,t,k,i=0,temp=0,sum=0,result=1;
    printf("\nEnter the range to Print Armstrong numbers in that range.");
    printf("\nEnter the first term of the Range:");
    scanf("%d",&n1);
    printf("Enter the last term of the Range:");
    scanf("%d",&n2);
    for(n=n1;n<=n2;n++)
    {
        i=0,temp=0,sum=0,result=1;
        t=n;
        k=n;
        while(t!=0)
        {
            t=t/10;
            i++;
        }
        while(k!=0)
        {
            temp=k%10;
            result=1;
            for(int l=0;l<i;l++)
            {
                result*=temp;
            }
            sum+=result;
            k=k/10;
        }
        if(n==sum)
        printf("%d,",n);
    }
    return 0;
}