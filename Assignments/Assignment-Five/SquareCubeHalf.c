// Accept one no, print square, cube and half of that no.

#include<stdio.h>
int main()
{
    int inputNumber, square, cube, half ;

    printf("\n Enter any Number: ");
    scanf("%d",&inputNumber);

    square = inputNumber * inputNumber ;
    cube   = inputNumber * inputNumber * inputNumber ;
    half   = inputNumber / 2 ;

    printf("\n Square: %d",square);
    printf("\n Cube: %d",cube);
    printf("\n Half: %d",half);

    return 0;
}