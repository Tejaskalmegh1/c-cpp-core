#include<stdio.h>

int SumOfElements(int[]);

int main()
{
    int arr[5], i, ArrayElementSum = 0;
    printf("\n Enter Array Elements: ");
    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    ArrayElementSum = SumOfElements(arr);
    
    printf("\n Sum of Array Elements: %d",ArrayElementSum);
    return 0;
}

int SumOfElements(int a[]){
    int sum = 0, i;
    for ( i = 0; i < 5; i++) {
        sum += a[i];
    }
    return sum;
}