// Accept 2 nos , interchange the contents physically without using third variable

#include<stdio.h>
int main()
{
    int numberOne, numberTwo ;
    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);

    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);

    printf("\n - - - Before Swaping - - - ");
    printf("\n Value of First Number: %d",numberOne);
    printf("\n Value of Second Number: %d",numberTwo);
    
    numberOne = numberOne + numberTwo ;
    numberTwo = numberOne - numberTwo ;
    numberOne = numberOne - numberTwo ;

    printf("\n - - - After Swaping - - - ");
    printf("\n Value of First Number: %d",numberOne);
    printf("\n Value of Second Number: %d",numberTwo);

    return 0;
}