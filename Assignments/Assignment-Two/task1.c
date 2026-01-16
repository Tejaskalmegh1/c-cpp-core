// 15 jan 2026 

// Write a C program which will scan the two numbers ( num1 , num2 ) from the user and check whether the num1 is divisible by num2 using the if-else statement.

// if num1 is divisible by num2 then show the result as “num1 is divisible by num2” 

// if the num1 is not divisible by num2 then show the result as “num1 is not divisible by num2”.

#include<stdio.h>
int main()
{
    int numberOne, numberTwo;

    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);

    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);

    if (numberOne % numberTwo == 0) {
        printf("\n %d is Divisible by %d",numberOne,numberTwo);
    }

    else {
        printf("\n %d is not Divisible by %d",numberOne,numberTwo);
    }

    return 0;
}