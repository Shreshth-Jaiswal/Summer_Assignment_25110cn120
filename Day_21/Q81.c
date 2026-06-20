// Write a program to Find string length without strlen().
#include<stdio.h>

void main()
{
    char str[1001];                       // This string has a limit it can only hold upto 1000 characters :)
    int len=0;

    printf("Enter a string:");
    gets(str);

// Finding Length
    while(str[len]!='\0')
    {
        len++;
    }

// Output
    printf("Length of string=%d",len);
}