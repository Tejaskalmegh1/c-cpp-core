#include<stdio.h>
int main()
{
    int arr[5], i = 0, sum = 0;
    printf("\n Enter Array Elements: ");

    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    printf("\n Array Elements are: ");

    for ( i = 0; i < 5; i++) {
        printf(" %d",arr[i]);
    }

    for ( i = 0; i < 5; i++) {
        (arr[i] & 1) ? printf("\n %d is Odd",arr[i]) : printf("\n %d is Even",arr[i]);
    }

    for ( i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    printf("\n Sum of all Elements: %d",sum);

    int max = arr[0], min = arr[0];

    for ( i = 0; i < 5; i++) {
        if (min > arr[i]) {
            min = arr[i];
        } 
    }

    for ( i = 0; i < 5; i++) { 
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    
    printf("\n Minimum number: %d",min);
    printf("\n Maximum Number: %d",max);

    return 0;
}