// Generate series : 1 2 3 2 1 4 3 0 5

#include<stdio.h>
int main()
{
    int i, arr[] = {1 , 2 , 3 , 2 , 1 , 4 , 3 , 0 , 5};
    for ( i = 0; i < 9; i++) {
        printf(" %d",arr[i]);
    }
    printf("\n");
    return 0;
}