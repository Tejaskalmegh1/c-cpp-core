// Print first 10 prime numbers

#include<stdio.h>
int main()
{
    printf("\n Prime Numbers: ");

    for (int i = 1; i < 11; i++)
    {
        if ((i % i == 0) && (i % 2 != 0)) {
            printf("%d ",i);
        }
    }
    
    return 0;
}