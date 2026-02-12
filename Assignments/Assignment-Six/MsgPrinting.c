// Print “WELCOME” message 5 times

#include<stdio.h>
int main()
{
    int i;

    printf("\n\n Using for loop : \n");
    for ( i = 1; i < 6; i++) {
        printf("\n WELCOME");
    }

    printf("\n\n Using While loop : \n");
    i = 1;
    while (i < 6) {
        printf("\n WELCOME");
        i++;
    }

    printf("\n\n Using Do While loop : \n");
    i = 1;
    do {
        printf("\n WELCOME");
        i++;
    } while (i < 6);
    
    return 0;
}