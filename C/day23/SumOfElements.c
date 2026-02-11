// Sum of elements in an array using pointer

#include<stdio.h>
int main()
{
    int arr[5], i = 0, sum = 0;

    printf("\n Enter Array Elements: ");
    int * ptr = &arr[0];
    for ( i = 0; i < 5; i++) {
        scanf("%d",ptr + i);
    }

    for ( i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }
    printf("\n Sum of array Elements: %d",sum);
    
    return 0;
}