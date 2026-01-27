// 15 jan 2026 

// Write a C program to check whether a number is even or odd using conditional operator.

#include<stdio.h>
int main()
{
    int number;

    printf("\n Enter any number to check is Even or Odd: ");
    scanf("%d",&number);

    if (number % 2 == 0)
    {
        printf("\n %d is Even Number ",number);
    }
    else
    {
        printf("\n %d is Odd Number ",number);
    }   

    return 0;
}