#include<stdio.h>
int main()
{
    int arr[5], i = 0, EvenSum = 0, OddSum = 0;
    printf("\n Enter Array Elements: ");

    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    printf("\n Array Elements: ");
    for ( i = 0; i < 5; i++) {
        printf(" %d",arr[i]);
    }

    for ( i = 0; i < 5; i++) {
        (arr[i] & 1) ? (OddSum += arr[i]) : (EvenSum += arr[i]) ;
    }

    printf("\n Sum of Even Array Elements: %d",EvenSum);
    printf("\n Sum of Odd Array Elements: %d",OddSum);

    return 0;
}   
