//Print all the prime nos. from 1 to 100

#include <stdio.h>
int main() 
{
    int  i;

    printf("\n Prime Numbers: ");

    for ( i = 1; i < 101; i++)  {
        if ((i % i == 0) && (i % 2 != 0)) {
            printf(" %d",i);
        }    
    }

    return 0;
}