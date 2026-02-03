#include<stdio.h>

int IsPrimeElements(int[]);

int main()
{
    int arr[5], i, ArrayElementSum = 0;
    printf("\n Enter Array Elements: ");
    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    IsPrimeElements(arr);
    
    return 0;
}

int IsPrimeElements(int a[]){
    int i;
    printf("\n Prime Numbers are: ");
    for ( i = 0; i < 5; i++) {
        if (a[i] % a[i] == 0 && a[i] % 2 != 0){
            printf(" %d ",a[i]);
        }
    }
    return 0;
}