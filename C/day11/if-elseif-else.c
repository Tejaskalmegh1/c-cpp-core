#include<stdio.h>
int main()
{
    int numberOne, numberTwo, numberThree ;
    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);
    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);
    printf("\n Enter Third Number: ");
    scanf("%d",&numberThree);

    if ((numberOne > numberTwo) && (numberOne > numberThree)) {
        printf("\n %d is Greater than %d and %d",numberOne,numberTwo,numberThree);
    }

    else if ((numberTwo > numberOne) && (numberTwo > numberThree)) {
        printf("\n %d is Greater than %d and %d",numberTwo,numberOne,numberThree);
    }

    else {
        printf("\n %d is Greater than %d and %d",numberThree,numberOne,numberTwo);
    }

    return 0;
    
}