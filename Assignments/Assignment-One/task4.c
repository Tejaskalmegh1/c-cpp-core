// 15 jan 2026

// Write a C program to find maximum between three numbers using conditional operator

#include<stdio.h>
int main()
{
    int numberOne, numberTwo, numberThree;

    printf("\n Enter Number First: ");
    scanf("%d",&numberOne);

    printf("\n Enter Number Second: ");
    scanf("%d",&numberTwo);

    printf("\n Enter Number Third: ");
    scanf("%d",&numberThree);

    if ((numberOne > numberTwo) && (numberOne > numberThree)) {
        printf("\n %d is Maximum",numberOne);
    }

    else if ((numberTwo > numberOne) && (numberTwo > numberThree)) {
        printf("\n %d is Maximum",numberTwo);
    }

    else {
        printf("\n %d is Maximum",numberThree);
    }
    
    return 0;
}