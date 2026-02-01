#include<stdio.h>

void CheckEvenOdd(int);

int main()
{
    int numberOne;

    printf("\n Enter any Number: ");
    scanf("%d",&numberOne);
    CheckEvenOdd(numberOne);
    
    return 0;
}

void CheckEvenOdd(int numOne){
    (numOne & 1) ? printf("\n %d is Odd ",numOne) : printf("\n %d is Even ",numOne) ;
}