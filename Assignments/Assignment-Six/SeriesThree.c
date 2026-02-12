// Generate series : 10 1 9 2 8 3 7 4 6 5 …. 1 10

#include<stdio.h>
int main()
{
    int i = 1, j = 10 ;
    printf("\n----- Using For Loop ----- \n");
    for ( i = 1; i <= 10; i++) {
        printf(" %d %d",j,i);
        j--;
    }
    
    printf("\n----- Using While Loop ----- \n");
    i = 1, j = 10;
    while (i <= 10) {
        printf(" %d %d",j,i);
        j--;
        i++;
    }

    printf("\n----- Using Do While Loop ----- \n");
    i = 1, j = 10;
    do
    {
        printf(" %d %d",j,i);
        j--;
        i++;
    } while (i <= 10);
        
    return 0;
}