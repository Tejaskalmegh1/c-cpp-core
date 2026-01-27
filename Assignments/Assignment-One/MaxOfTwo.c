// 15 jan 2026

// Write a C program to find maximum between two numbers using conditional operator

#include<stdio.h>
int main()
{
    int numberOne, numberTwo;
    
    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);

    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);

    if (numberOne > numberTwo) {
        printf("\n %d is Maximum",numberOne);
    }

    else if (numberTwo > numberOne) {
        printf("\n %d is Maximum",numberTwo);
    }

    else {
        printf("\n Both numbers are same");
    }

    return 0;

}