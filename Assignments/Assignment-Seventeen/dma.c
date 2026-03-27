// Write a C program which will scan two integer values (suppose a and b ) from the user , Allocate memory dynamically and Performs some Basic operations as follows:

// To check Greater value among a and b.
// To check whether a is a factor(divisible ) of b.
// To check whether b is a factor(divisible ) of a.
// To check if a is equal to b or not.
// Perform the operation and print the proper result.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a = (int*)malloc(sizeof(int));
    printf("\n enter value of A: ");
    scanf("%d",a);
    int *b = (int*)malloc(sizeof(int));
    printf("\n enter value of B: ");
    scanf("%d",b);
 
    // To check whether a is a factor(divisible ) of b.
    (*a > *b) ? printf("\n A is greater than B") : printf("\n B is greater than A");
 
    // To check whether a is a factor(divisible ) of b.
    (*b % *a == 0) ? printf("\n A is factor of B") : printf("\n A is not factor of B");

    // To check whether b is a factor(divisible ) of a.
    (*a % *b == 0) ? printf("\n B is factor of A") : printf("\n B is not factor of A");

    // To check if a is equal to b or not.
    (*a == *b) ? printf("\n A is equal to B") : printf("\n A is not equal to B");
 
    free(*a);
    free(*b);

    return 0;
}