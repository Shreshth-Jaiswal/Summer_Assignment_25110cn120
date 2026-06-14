// Write a program to Frequency of an element.
#include<stdio.h>
int main()
{
    int n,freq=0;

    printf("Enter the no. of elements you wanna enter in the array:");
    scanf("%d",&n);

// Array Input
    int eye[n];
    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&eye[i]);
    } 
// Element to search
    int x,flag=0;
    printf("Enter the no. you wanna search:");
    scanf("%d",&x);

// Frequency of elements and Output
    printf("The no. %d is in positions- ",x);
    for(int i=0;i<n;i++)
    {
        if(eye[i]==x)
        {
            printf("%d,",i+1);
            freq+=1;
            flag=1;
        }
    }
    printf(" and that will be total %d times.",freq);
    
// Output
    if(flag==0)
    printf("The no. not found");

    return 0;
}