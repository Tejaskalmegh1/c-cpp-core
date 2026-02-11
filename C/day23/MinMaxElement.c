// find min and max array element using pointer { 10, 20, 30, 40, 50 }

#include<stdio.h>
int main()
{
    int arr[5], i = 0;
    int * ptr = &arr[0];
    printf("\n Enter array elements: ");
    for ( i = 0; i < 5; i++) {
        scanf("%d",ptr + i);
    }

    int min = *(ptr + 0);
    for ( i = 0; i < 5; i++) {
        if(*(ptr + i) < min){
            min = *(ptr + i);
        }
    }
    
    int max = *(ptr + 0);
    for ( i = 0; i < 5; i++) {
        if(*(ptr + i) > max){
            max = *(ptr + i);
        }
    }

    printf("\n Min element: %d",min);
    printf("\n Max element: %d",max);

    return 0;
}