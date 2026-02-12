// Generate series : 1 4 9 16 25 36 49……100

#include<stdio.h>
int main()
{
    int i = 1 ;
    
    printf("\n----- Using For Loop ----- \n");
    for ( i = 1; i <= 10; i++) {
        printf(" %d ",i*i);
    }
    
    printf("\n----- Using While Loop ----- \n");
    i = 1;
    while (i <= 10) {
        printf(" %d ",i*i);
        i++;
    }

    printf("\n----- Using Do While Loop ----- \n");
    i = 1;
    do
    {
        printf(" %d ",i*i);
        i++;
    } while (i <= 10);
        
    return 0;
}