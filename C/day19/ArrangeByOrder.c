#include<stdio.h>

int arrangeByOrder(int[]);

int main()
{
    int arr[5], i, ArrayElementSum = 0;
    printf("\n Enter Array Elements: ");
    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    arrangeByOrder(arr);
    
    return 0;
}

int arrangeByOrder(int a[]){
    int i, j, temp;
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < 5; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }        
    }

    printf("\n Descending order : ");
    for ( i = 0; i < 5; i++) {
        printf(" %d",a[i]);
    }   

    return 0;
}