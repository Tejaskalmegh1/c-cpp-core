// Write C Programs to print the given patterns

// A
// B C
// D E F
// G H I J

#include<stdio.h>
int main()
{
    char count = 'A';
    int i, j;
    
    printf("\n----- Using For Loop -----\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ",count);
            count++;
        }
        printf("\n");
    }

     printf("\n----- Using While Loop -----\n");
     i = 1, j = 1; 
     count = 'A';
     while (i<=4) {
        while(j<=i){
            printf("%c ",count);
            count++;
            j++;
        }
        j = 1;
        printf("\n");
        i++;
     }
     
     printf("\n----- Using Do While Loop -----\n");
     i = 1, j = 1; 
     count = 'A';
     do {
        do {
            printf("%c ",count);
            count++;
            j++;
        } while (j<=i);
        printf("\n");
        j = 1;
        i++;
     } while (i<=4);
     
    return 0;
}