// Write a program to Character frequency.
#include<stdio.h>

void main()
{
    char str[1001],ch;
    int freq=0,i=0;

// String Input
    printf("Enter a string: ");
    gets(str);

// Character Input
    printf("Enter a character to get its frequency : ");
    scanf("%c",&ch);

// Finding Frequency                                                    //
    while(str[i]!='\0')                                                 //
    {                                                                   //
        if(str[i]==ch)                                                  //
        {                                                               // Same logic as Q86 (No. of words)
            freq++;                                                     //
        }                                                               //
        i++;                                                            //
    }                                                                   //

// Output
    printf("\nFrequency of %c = %d",ch,freq);
}