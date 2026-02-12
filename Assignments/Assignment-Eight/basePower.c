// Accept 2 numbers as base and power and print the result as base raised to power

#include<stdio.h>
int main()
{
    int base, power, result = 1;
    printf("\n Enter Base number: ");
    scanf("%d",&base);
    printf("\n Enter Power : ");
    scanf("%d",&power);

    for (int i = 1; i <= power; i++) {
        result *= base; 
    }

    printf("\n %d by %d is: %d",base,power,result);

    return 0;
}