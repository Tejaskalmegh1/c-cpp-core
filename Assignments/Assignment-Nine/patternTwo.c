// Write C Programs to print the given patterns

// A
// A B
// A B C

#include<stdio.h>
int main()
{
    char i,j;
    printf("\n----- Using For Loop -----\n");
    for (i = 'A'; i <= 'C'; i++) {
        for (j = 'A'; j <= i; j++) {
            printf("%c ",j);
        }
        printf("\n");
    }

    i = 'A', j = 'A';
    printf("\n----- Using While Loop -----\n");
    while (i <= 'C') {
        while (j <= i){
            printf("%c ",j);
            j++;
        }
        printf("\n");
        i++;
        j = 'A';
    }

    i = 'A', j = 'A';
    printf("\n----- Using Do While Loop -----\n");
    do
    {
        do
        {
            printf("%c ",j);
            j++;
        } while (j<=i);
        j = 'A';
        printf("\n");
        i++;
    } while (i<='C');
    
    return 0;    
}