#include<stdio.h>
int main()
{
    int i = 1, j = 1;
    for ( i = 1; i <= 3; i++) {
        for (j = 1;j <= 3; j++) {
            printf(" *");
        }
        printf("\n"); 
    }
    
    i = 1, j = 1;
    for ( i = 1; i <= 3; i++) {
        for ( j = 1; j <= i; j++) {
            printf(" *");
        }
        printf("\n"); 
    }
    
    return 0;    
}
