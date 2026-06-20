// Write a program to Convert lowercase to uppercase.
#include<stdio.h>

void main()
{
    char str[1001];
    int i=0;

// String Input
    printf("Enter a string: ");
    gets(str);

// Input String Output
    printf("\n----Original String----\n");
    printf("%s",str);

// Converting Lowercase to Uppercase
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        i++;
    }

// Output
    printf("\n----Uppercase String----\n");
    printf("%s",str);
}