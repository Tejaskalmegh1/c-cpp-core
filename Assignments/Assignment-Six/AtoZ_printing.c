// Generate characters from A to Z and print

#include<stdio.h>
int main()
{
    char ch = 'A';

    printf("\n----- Using For Loop -----\n");
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf(" %c ",ch);
    }

    printf("\n----- Using While Loop -----\n");
    ch = 'A';
    while (ch <= 'Z') {
        printf(" %c ",ch);
        ch++;
    }

    printf("\n----- Using Do While Loop -----\n");
    ch = 'A';
    do {
        printf(" %c ",ch);
        ch++;
    } while (ch <= 'Z');
    
    return 0;    
}
