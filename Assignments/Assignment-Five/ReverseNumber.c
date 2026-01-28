// Accept a two digit number and print it in a reverse (make the use of MOD operator)

#include<stdio.h>
int main()
{
    int inputNumber, container ;
    printf("\n Enter any number to Reverse: ");
    scanf("%d",&inputNumber);

    while (inputNumber > 0)
    {
        container = inputNumber % 10 ;
        printf("%d",container) ;
        inputNumber = inputNumber  / 10 ;
    }  
    return 0;
}
