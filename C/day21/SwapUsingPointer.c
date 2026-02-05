#include<stdio.h>

void SwapOfTwoNumbers(int,int);
void SwapOfNumbers(int*,int*);

int main()
{
    int numberOne, numberTwo;

    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);

    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);
    
    // Passing value to the function
    SwapOfTwoNumbers(numberOne, numberTwo);
    
    // Passing address to the function
    SwapOfNumbers(&numberOne, &numberTwo);

    return 0;
}

void SwapOfTwoNumbers(int numberOne,int numberTwo){
    int temp;
    printf("\n- - - Before Swaping - - -");
    printf("\n First Number : %d Second Number : %d",numberOne,numberTwo);
    temp = numberOne ;
    numberOne = numberTwo ;
    numberTwo = temp ;
    printf("\n- - - After Swaping - - -");
    printf("\n First Number : %d Second Number : %d",numberOne,numberTwo);
}

void SwapOfNumbers(int *numberOne,int *numberTwo){
    int temp;
    printf("\n- - - Before Swaping - - -");
    printf("\n First Number : %d Second Number : %d",*numberOne,*numberTwo);
    temp = *numberOne ;
    *numberOne = *numberTwo ;
    *numberTwo = temp ;
    printf("\n- - - After Swaping - - -");
    printf("\n First Number : %d Second Number : %d",*numberOne,*numberTwo);
}