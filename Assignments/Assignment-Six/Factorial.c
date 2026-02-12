// Accept a no and print factorial of that no.

#include<stdio.h>
int main()
{
    int GivenNumber, Factorial = 1, i;
    printf("\n Enter Any Number: ");
    scanf("%d",&GivenNumber);

    for ( i = 1; i <= GivenNumber; i++) {
        Factorial *= i ;
    }

    printf("\n Factorial of %d is %d",GivenNumber,Factorial);

    return 0;
}