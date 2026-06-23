// Write a program to Find first non-repeating character.
#include<stdio.h>

void main()
{
    char str[101];
    int flag=0,count=0;

// String Input
    printf("Enter a string: ");
    gets(str);

// Finding First Non-Repeating Character
    for(int i=0;str[i]!='\0';i++)
    {
        count=0;
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("\nFirst Non-Repeating Character = %c",str[i]);
            flag=1;
            break;
        }
    }

// Output
    if(flag==0)
    {
        printf("\nNo Non-Repeating Character Found");
    }
}