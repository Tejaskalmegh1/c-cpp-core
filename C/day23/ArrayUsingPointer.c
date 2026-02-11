#include<stdio.h>
int main()
{
    int arr[5], i = 0;

    printf("\n ENter Array Elements: ");
    int * ptr = &arr[0];

    for ( i = 0; i < 5; i++) {
        scanf("%d",ptr + i);
    }

    printf("\n Array ELements are: ");

    for ( i = 0; i < 5; i++) {
        printf(" %d",*(ptr + i));
    }
    
    return 0;
}