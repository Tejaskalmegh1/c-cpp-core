#include<stdio.h>
int main()
{
    int numberOne, numberTwo;
    printf("\n Enter First number: ");
    scanf("%d",&numberOne);
    printf("\n Enter Second number: ");
    scanf("%d",&numberTwo);

    if (numberOne > numberTwo) {
        printf("\n %d is Greater than %d",numberOne,numberTwo);
    }
    else {
        printf("\n %d is less than number %d",numberOne,numberTwo);
    }
    
    return 0;
}