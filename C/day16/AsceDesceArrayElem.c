#include<stdio.h>
int main()
{
    int arr[5], i,j;
    printf("\nEnter array Elements: ");

    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }
    
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < 5; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n-----ascending-----\n");
    for ( i = 0; i < 5; i++) {
        printf("%d",arr[i]);
    }
    
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < 5; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n-----descending-----\n");
    for ( i = 0; i < 5; i++) {
        printf("%d",arr[i]);
    }

    return 0;    
}