// Accept a two digit number and print the sum of two digits (make the use of MOD operator)

#include<stdio.h>
int main()
{
    int sum, inputNumber, containerOne, containerTwo;
    printf("\n Enter any Number: ");
    scanf("%d",&inputNumber);

    containerOne = inputNumber / 10 ;
    containerTwo = inputNumber % 10 ;
    sum = containerOne + containerTwo;

    printf("\n Addition of Two Digits: %d",sum);

    return 0;
}