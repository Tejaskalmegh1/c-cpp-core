// 15 jan 2026

// Write a C program to input a number from user and print multiplication table of the given number using for loop.

#include<stdio.h>
int main() 
{
    int number, i;

    printf("\n Enter any number to create a table: ");
    scanf("%d",&number);

    for ( i = 1; i < 11; i++)
    {
        printf("\n %d * %d = %d",i,number,i*number);
    }
    
    return 0;
}