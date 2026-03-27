// Write C Programs to print the given patterns

// A
// A  B
// A  B  A
// A  B  A  B

#include<stdio.h>
int main()
{
    int i, j;
    
    printf("\n----- Using For Loop -----\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                printf("B ");
            }
            else {
                printf("A ");
            }
        }
        printf("\n");
    }

    return 0;
}