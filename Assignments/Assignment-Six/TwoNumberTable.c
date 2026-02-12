//Accept 2 nos. and print the tables of all the nos between them

#include<stdio.h>
int main()
{
    int i, numberOne, numberTwo;

    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);
    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);

    printf("\n\n----- Using For Loop -----\n\n");
    printf(" %d Table: \n",numberOne);
    for ( i = 1; i < 11; i++) {
        printf(" %d ",numberOne*i);        
    }
    printf("\n\n %d Table: \n",numberTwo);
    for ( i = 1; i < 11; i++) {
        printf(" %d ",numberTwo*i);        
    }

    printf("\n\n----- Using While Loop -----\n\n");
    printf(" %d Table: \n",numberOne);
    i = 1;
    while (i < 11) {
        printf(" %d ",numberOne*i);
        i++;        
    }
    printf("\n\n %d Table: \n",numberTwo);
    i = 1;
    while (i < 11) {
        printf(" %d ",numberTwo*i);
        i++;        
    }

    printf("\n\n----- Using Do While Loop -----\n\n");
    printf(" %d Table: \n",numberOne);
    i = 1;
    do {
        printf(" %d ",numberOne*i);
        i++;
    } while (i < 11);
    printf("\n\n %d Table: \n",numberTwo);
    i = 1;
    do {
        printf(" %d ",numberTwo*i);
        i++;
    } while (i < 11);

    return 0;
}