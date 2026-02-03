#include<stdio.h>

int checkEvenOdd(int);

int main()
{
    int Number;
    
    printf("\n Enter Any Number: ");
    scanf("%d",&Number);

    checkEvenOdd(Number);

    return 0;
}

int checkEvenOdd(int number){
    (number & 1) ? printf("\n %d is Odd",number) : printf("\n %d is Even",number);

    return 0;
}
