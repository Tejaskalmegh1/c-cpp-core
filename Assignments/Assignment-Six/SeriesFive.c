// Generate series : 0 1 1 2 3 5 8 13 21 34

#include<stdio.h>
int main()
{
    int i, arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    for ( i = 0; i < 10; i++) {
        printf(" %d",arr[i]);
    }
    printf("\n");
    return 0;
}