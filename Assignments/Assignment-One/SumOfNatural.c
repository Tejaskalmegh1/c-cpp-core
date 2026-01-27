// 15 jan 2026

// Write a C program to find the sum of all natural numbers between 1 to n using for loop.

#include<stdio.h>
int main()
{
    int number, i, sum = 0;
    
    printf("\n Enter any Number: ");
    scanf("%d",&number);

    for ( i = 1; i <= number ; i++)
    {
       sum = sum + i ;
    }

    printf("\n Sum of all natural numbers from 1 to %d : %d",number,sum);
    
    return 0;    
}