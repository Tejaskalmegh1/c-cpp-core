// Accept a number and print it in a reverse manner

#include<stdio.h>
int main()
{
    int numberOne, rev = 0;

    printf("\n Enter any Number: ");
    scanf("%d",&numberOne);

    printf("\n Reverse Manner: ");
    while (numberOne > 0) {
        rev = numberOne % 10;
        printf("%d",rev);
        numberOne /= 10;
    }

    return 0;
}