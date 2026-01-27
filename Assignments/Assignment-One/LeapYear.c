// 15 jan 2026

// Write a C program to check whether year is leap year or not using conditional operator.

#include <stdio.h>
int main()
{
    int year;

    printf("\n Enter a Year: ");
    scanf("%d",&year);

    if ((year % 400 == 0) || year % 100 != 0 && year % 4 == 0 ) {
        printf("\n %d is a Leap Year",year);
    } 
    
    else {
        printf("\n %d is NOT a Leap Year",year);
    }

    return 0;
}
