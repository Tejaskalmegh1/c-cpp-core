// 15 jan 2026

// Write a C program which will scan the number ( n ) from the user and display the result as following criteria using an if-else statement.

// if the number  n is divisible by 5 then it should display “C Language”.
// if the number  n is divisible by 7 then it should display “Programming”.
// if the number  n is divisible by 5 and 7  then it should display “C Language Programming”.

#include<stdio.h>
int main()
{
    int number;
  
    printf("\n Enter any Number: ");
    scanf("%d",&number);

    if (number % 5 == 0)
    {
        printf("\n C Language");
    }
    else if (number % 7 == 0)
    {
        printf("\n Programming");
    }
    else if ((number % 5 == 0) && (number % 7 == 0))
    {
        printf("\n C Language Programming");
    }
    else
    {
        printf("\n %d is not divisible by 5 or 7 ");
    }
    
    return 0;
}