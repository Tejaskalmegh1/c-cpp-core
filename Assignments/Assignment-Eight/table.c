// Accept a number and print the table of that number

#include<stdio.h>
int main()
{
    int numberOne;
    printf("\n Enter any number to generate table : ");
    scanf("%d",&numberOne);

    printf("\n Table of %d: ",numberOne);
    for ( int i = 1; i < 11; i++) {
        printf(" %d",i*numberOne);
    }
    
    return 0;
}