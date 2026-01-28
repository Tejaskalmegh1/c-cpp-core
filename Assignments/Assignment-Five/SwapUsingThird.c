// Accept 2 nos , interchange the contents physically by using third variable

#include<stdio.h>
int main()
{
    int numberOne, numberTwo, numberThree = 0 ;
    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);

    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);

    printf("\n - - - Before Swaping - - - ");
    printf("\n Value of First Number: %d",numberOne);
    printf("\n Value of Second Number: %d",numberTwo);
    
    numberThree = numberOne + numberTwo ;
    numberOne = numberThree - numberOne ;
    numberTwo = numberThree - numberTwo ;

    printf("\n - - - After Swaping - - - ");
    printf("\n Value of First Number: %d",numberOne);
    printf("\n Value of Second Number: %d",numberTwo);
    
    return 0;
}
