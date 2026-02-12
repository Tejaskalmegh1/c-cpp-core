// Accept 2 nos and print all nos between them in a reverse order

#include<stdio.h>
int main()
{
    int i, numberOne, numberTwo;

    printf("\n Enter Starting Number: ");
    scanf("%d",&numberOne);

    printf("\n Enter Ending Number: ");
    scanf("%d",&numberTwo);

    if (numberTwo > numberOne)    
    for ( i = numberTwo; i >= numberOne; i--) {
        printf(" %d",i);
    }

    return 0;    
}