// Accept 5 nos. and print the sum of them

#include<stdio.h>

int main()
{
    int numberOne, numberTwo, numberThree, numberFour, numberFive, SumOfAllNumbers;

    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);

    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);

    printf("\n Enter Three Number: ");
    scanf("%d",&numberThree);

    printf("\n Enter Fourth Number: ");
    scanf("%d",&numberFour);

    printf("\n Enter Fifth Number: ");
    scanf("%d",&numberFive);

    SumOfAllNumbers = numberOne + numberTwo + numberThree + numberFour + numberFive;

    printf("\n Sum of All Five Numbers: %d",SumOfAllNumbers);

    return 0;
}