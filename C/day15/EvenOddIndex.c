#include<stdio.h>
int main()
{
    int arr[5], i = 0, sum = 0;
    printf("\n Enter Array Elements: ");

    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    // printf("\n Before Array Elements: ");
    // for ( i = 0; i < 5; i++) {
    //     printf(" %d",arr[i]);
    // }

    for ( i = 0; i < 5; i++) {
        (i & 1) ? (arr[i] -= 10) : (arr[i] += 10) ;
    }

    printf("\n After Array Elements: ");
    for ( i = 0; i < 5; i++) {
        printf(" %d",arr[i]);
    }

    return 0;
}   
