// Write a program to Find largest prime factor. 
#include <stdio.h>
int main()
{
    int n,j=0,k,flag=0;
    printf("\nEnter the no. to find its largest prime factor:");
    scanf("%d",&n);
    int prime[n];
    k=n;
    for(int l=2;l<=k;l++)
    {
        for(int i=2;i<=l/2;i++)
        {
            flag=0;
            if(l%i==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            prime[j]=l;
            j++;
        }
    }
// Till now we only make an prime array.
    j=0;
    while(k!=1)
    {
        if(k%prime[j]==0)
        k=k/prime[j];
        else
        j++;
    }
    printf("Largest prime factor of %d is %d.",n,prime[j]);
    return 0;
}