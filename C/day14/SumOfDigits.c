#include<stdio.h>
int main()
{
    int inputNumber, remainder, sum = 0;
    printf("\n Enter any Number: ");
    scanf("%d",&inputNumber);

    while (inputNumber > 0)
    {
        remainder = inputNumber % 10;
        sum = sum + remainder;
        inputNumber = inputNumber / 10;
    }

    printf("\n Sum of Input Digits: %d",sum);
    
    return 0;
}