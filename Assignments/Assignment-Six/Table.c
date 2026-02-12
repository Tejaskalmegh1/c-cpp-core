// Accept 1 no and print table of that no

#include<stdio.h>
int main()
{
    int i, inputNumber;

    printf("\n Enter any Number: ");
    scanf("%d",&inputNumber);

    printf("\n Using For loop: ");
    for ( i = 1; i < 11; i++) {
        printf("\n %d ",i*inputNumber);
    }

    printf("\n Using While loop: ");
    i = 1;
    while (i < 11) {
        printf("\n %d ",i*inputNumber);
        i++;
    }

    printf("\n Using Do While loop: ");
    i = 1;
    do
    {
        printf("\n %d ",i*inputNumber);
        i++;
    } while (i < 11);    

    return 0;
}