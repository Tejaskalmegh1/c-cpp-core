// Generate series : 1 2 2 4 3 6 4 8 5 10…. 10 20

#include<stdio.h>
int main()
{
    int i;
    printf("\n----- Using For Loop ----- \n");
    for ( i = 1; i <= 10; i++) {
        printf(" %d %d",i,i*2);
    }
    
    printf("\n----- Using While Loop ----- \n");
    i = 1;
    while (i <= 10) {
        printf(" %d %d",i,i*2);
        i++;
    }

    printf("\n----- Using Do While Loop ----- \n");
    i = 1;
    do
    {
        printf(" %d %d",i,i*2);
        i++;
    } while (i <= 10);
        
    return 0;
}