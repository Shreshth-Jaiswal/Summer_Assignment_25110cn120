// Write a program to Reverse a string.
#include<stdio.h>

void main()
{
    char str[1001],rev[1001];
    int len=0;

// String Input
    printf("Enter a string: ");
    gets(str);

// Finding String Length
    while(str[len]!='\0')
    {
        len++;
    }

// Reversing String
    int j=0;
    for(int i=len-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';

// Output
    printf("\n----Original String----\n");
    printf("%s",str);

    printf("\n----Reversed String----\n");
    printf("%s",rev);
}