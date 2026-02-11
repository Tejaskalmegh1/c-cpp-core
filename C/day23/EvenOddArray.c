// Checking even odd elements in array using pointer

#include<stdio.h>
int main()
{
    int arr[5], i = 0;

    printf("\n Enter Array elements: ");
    int * ptr = &arr[0];
    for ( i = 0; i < 5; i++) {
        scanf("%d",ptr + i);
    }

    printf("\n Even Array elements are: ");
    for ( i = 0; i < 5; i++) {
        if (*(ptr + i) % 2 == 0) {
            printf(" %d",*(ptr + i));
        }
    }
    
    printf("\n Odd Array elements are: ");
    for ( i = 0; i < 5; i++) {
        if (*(ptr + i) % 2 != 0) {
            printf(" %d",*(ptr + i));
        }
    }

    return 0;
}