// Create an integer array of size 10

// 1. Write a function sort to sort the array.


#include<stdio.h>

void sortArray(int[]);

int main()
{
    int arr[10];
    printf("\n Enter array Elements: ");
    for (int i = 0; i <= 9; i++) {
        scanf("%d",&arr[i]);
    }

    sortArray(arr);
    
    return 0;   
}

void sortArray(int arr[]){
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (arr[i] > arr[j]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
    }

    printf("\n After soring: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ",arr[i]);
    }    
}