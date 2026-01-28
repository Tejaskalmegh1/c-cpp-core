// Accept any no and print whether it is odd or even

#include<stdio.h>
int main()
{
    int numberOne;
    printf("\n Enter any Number to check is Even or Odd: ");
    scanf("%d",&numberOne);

    (numberOne & 1) ? printf("\n %d is Odd",numberOne) : printf("\n %d is Even",numberOne);

    return 0;
}