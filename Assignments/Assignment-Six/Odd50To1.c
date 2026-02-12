// Print all odd nos from 50 to 1

#include<stdio.h>
int main()
{
     int i ;
    
    printf("\n----- Using For Loop ----- \n");
    for ( i = 50; i >= 1; i--) {
        if (i % 2 == 1) {
         printf(" %d ",i);
        }
    }
    
    printf("\n----- Using While Loop ----- \n");
    i = 50;
    while (i >= 1) {
        if (i % 2 == 1) {
         printf(" %d ",i);
        }
        i--;
    }

    printf("\n----- Using Do While Loop ----- \n");
    i = 50;
    do
    {
        if (i % 2 == 1) {
         printf(" %d ",i);
        }
        i--;
    } while (i >= 1);
        
    return 0;
}