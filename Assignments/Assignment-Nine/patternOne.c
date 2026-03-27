// Write C Programs to print the given patterns

// 1
// 1 2
// 1 2 3

#include<stdio.h>
int main()
{
    int i = 1, j = 1;
 
    printf("\n----- Using For Loop -----\n");
    for ( i = 1; i <= 3; i++) {
        for ( j = 1; j <= i; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
 
    printf("\n----- Using While Loop -----\n");
    i = 1, j = 1;
    while (i<=3) {
        while (j<=i) {
            printf("%d ",j);
            j++;
        }
        j = 1;
        printf("\n");
        i++;
    }
 
    printf("\n----- Using Do While Loop -----\n");
    i = 1, j = 1;
    do {
        do {
            printf("%d ",j);
            j++;
        } while (j<=i);
        j = 1;
        printf("\n");
        i++;
    } while(i<=3);
    
    return 0;    
}