// Print all the even nos from 1 to 50

#include<stdio.h>
int main()
{
     int i = 1 ;
    
    printf("\n----- Using For Loop ----- \n");
    for ( i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
         printf(" %d ",i);
        }
    }
    
    printf("\n----- Using While Loop ----- \n");
    i = 1;
    while (i <= 50) {
        if (i % 2 == 0) {
         printf(" %d ",i);
        }
        i++;
    }

    printf("\n----- Using Do While Loop ----- \n");
    i = 1;
    do
    {
        if (i % 2 == 0) {
         printf(" %d ",i);
        }
        i++;
    } while (i <= 50);
        
    return 0;
}