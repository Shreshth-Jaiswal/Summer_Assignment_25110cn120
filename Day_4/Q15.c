// Write a program to Check Armstrong number.
#include <stdio.h>
int main()
{
    int n,t,k,i=0,temp=0,sum=0,result=1;
    printf("Enter the no. to check if it is an Armstrong number:");
    scanf("%d",&n);
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
    printf("\n%d is an armstrong number.",n);
    else
    printf("\n%d is't an armstrong number.",n);
    return 0;
}