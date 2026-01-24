#include<stdio.h>
int main()
{
    int inputNumber, remainder, SumOfDigit = 0;
    printf("\n Enter any Number: ");
    scanf("%d",&inputNumber);

    while (inputNumber > 0)
    {
        remainder = inputNumber % 10;
        SumOfDigit += remainder;
        inputNumber = inputNumber / 10;
    }

    printf("\n Sum of Digit is: %d",SumOfDigit);

    return 0;

}    
    

