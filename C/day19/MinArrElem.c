#include<stdio.h>

int findMinumim(int[]);

int main()
{
    int arr[5], i, ArrayElementSum = 0;
    printf("\n Enter Array Elements: ");
    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    findMinumim(arr);
    
    return 0;
}

int findMinumim(int a[]){
    int i, min = a[0];
    for ( i = 0; i < 5; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    printf("\n Minimum of all array elements is : %d",min);
    return 0;
}