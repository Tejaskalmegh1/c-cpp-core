#include<stdio.h>
int main()
{
    int i = 0, arr[5];

    printf("\n Enter Array Elements: ");
    
    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    printf("\n Array Elements: ");

    for ( i = 0; i < 5; i++) {
        printf(" %d",arr[i]);
    }

    return 0;
}