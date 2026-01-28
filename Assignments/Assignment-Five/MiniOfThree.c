// Accept 3 nos and print the minimum out of them

#include<stdio.h>
int main()
{
    int numberOne, numberTwo, numberThree;

    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);

    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);

    printf("\n Enter Third Number: ");
    scanf("%d",&numberThree);

    if ((numberOne < numberTwo) && (numberOne < numberThree)) {
        printf("\n Minimum number: %d",numberOne);
    }
    else if ((numberTwo < numberOne) && (numberTwo < numberThree)) {
        printf("\n Minimum number: %d",numberTwo);
    }
    else {
        printf("\n Minimum number: %d",numberThree);
    }
    
    return 0;
}