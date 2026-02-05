#include<stdio.h>
int main()
{
    int arr1[2][2] = {34,87,92,16}, i, j;
    int arr2[2][2] = {{34,28},{19,61}};
    int arr3[][2] = {44,55,66,77};

    printf("\n----- Array One -----\n");
    
    for ( i = 0; i < 2; i++) {
        for (j  = 0; j < 2; j++) {
            printf(" %d",arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n----- Array Two -----\n");
    
    for ( i = 0; i < 2; i++) {
        for (j  = 0; j < 2; j++) {
            printf(" %d",arr2[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 2; i++) {
        for (j  = 0; j < 2; j++) {
           arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\n----- Addition of Array one & Two -----\n");

    for ( i = 0; i < 2; i++) {
        for (j  = 0; j < 2; j++) {
            printf(" %d",arr3[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 2; i++) {
        for (j  = 0; j < 2; j++) {
           arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    printf("\n----- Substration of Array one & Two -----\n");

    for ( i = 0; i < 2; i++) {
        for (j  = 0; j < 2; j++) {
            printf(" %d",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}