// Write a C program which will scan two integer values (suppose a and b ) from the user , Allocate memory dynamically and Performs some Basic operations as follows 

// Addition.
// Subtraction.
// Multiplication.
// Division.
// Modulus.
// Perform the operation and print the proper result.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *numberOne = (int*)malloc(sizeof(int));
    printf("\n enter first number: ");
    scanf("%d",numberOne);
    int *numberTwo = (int*)malloc(sizeof(int));
    printf("\n enter second number: ");
    scanf("%d",numberTwo);
    
    int addition = *numberOne + *numberTwo;
    int substraction = *numberOne - *numberTwo;
    int multiplication = (*numberOne) * (*numberTwo);
    int division = (*numberOne) / (*numberTwo);
    int modulus = (*numberOne) % (*numberTwo);

    printf("\n addition of %d and %d: %d",*numberOne,*numberTwo,addition);
    printf("\n substraction of %d and %d: %d",*numberOne,*numberTwo,substraction);
    printf("\n multiplication of %d and %d: %d",*numberOne,*numberTwo,multiplication);
    printf("\n division of %d and %d: %d",*numberOne,*numberTwo,division);
    printf("\n modulus of %d and %d: %d",*numberOne,*numberTwo,modulus);

    free(*numberOne);
    free(*numberTwo);

    return 0;
}