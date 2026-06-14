// Write a program to Linear search.
#include<stdio.h>
int main()
{
    int n;

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

// Linear Search and Output
    for(int i=0;i<n;i++)
    {
        if(eye[i]==x)
        {
            printf("The no. %d is in the %d position\n",x,i+1);
            flag=1;
        }
    }

// Output
    if(flag==0)
    printf("The no. not found");

    return 0;
}