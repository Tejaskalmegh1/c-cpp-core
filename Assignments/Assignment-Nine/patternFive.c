// Write C Programs to print the given patterns

// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include <stdio.h>

int main()
{
    int i, j;

    printf("\n----- Using For Loop -----\n");
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ",(i + j + 1) % 2);
        }
        printf("\n");
    }

    printf("\n----- Using While Loop -----\n");
    i = 1;
    while (i<=4) {
        j = 1;
        while (j<=i) {
            printf("%d ",(i + j + 1) % 2);
            j++;
        }
        printf("\n");
        i++;        
    }

    printf("\n----- Using Do While Loop -----\n");
    i = 1;
    do
    {
        j = 1;
        do
        {
            printf("%d ",(i + j + 1) % 2);
            j++;
        } while (j<=i);
        printf("\n");
        i++;        
    } while (i<=4);
    
    return 0;
}
