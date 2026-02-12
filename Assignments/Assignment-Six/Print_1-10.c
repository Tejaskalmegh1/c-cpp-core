// Generate a series of nos. from 1 to 10

#include<stdio.h>
int main()
{
    int i;

    printf("\n\n Using for loop : \n");
    for ( i = 1; i < 11; i++) {
        printf("\n %d",i);
    }

    printf("\n\n Using While loop : \n");
    i = 1;
    while (i < 11) {
        printf("\n %d",i);
        i++;
    }

    printf("\n\n Using Do While loop : \n");
    i = 1;
    do {
        printf("\n %d",i);
        i++;
    } while (i < 11);
    
    return 0;
}