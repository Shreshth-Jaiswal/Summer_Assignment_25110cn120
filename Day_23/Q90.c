// Write a program to Find first repeating character.
#include<stdio.h>
void main()
{
    char str[101];
    int flag=0;

// String Input
    printf("Enter a string: ");
    gets(str);

// Finding First Repeating Character
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                printf("\nFirst Repeating Character = %c",str[i]);
                flag=1;
                goto end;
            }
        }
    }

// Output
    if(flag==0)
    {
        printf("\nNo Repeating Character Found");
    }

    end:
    printf("");
}