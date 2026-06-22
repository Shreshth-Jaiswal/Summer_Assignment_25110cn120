// Write a program to Remove spaces from string.
#include<stdio.h>

void main()
{
    char str[1001],new_str[1001];
    int i=0,j=0;

// String Input
    printf("Enter a string: ");
    gets(str);

// Removing Spaces
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            new_str[j]=str[i];
            j++;
        }
        i++;
    }

    new_str[j]='\0';

// Output
    printf("\n----String After Removing Spaces----\n");
    printf("%s",new_str);
}