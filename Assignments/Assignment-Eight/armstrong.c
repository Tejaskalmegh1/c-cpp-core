// Accept a number and check if it is an Armstrong number

#include<stdio.h>
int main()
{
    int numberOne, temp = 0, sum = 0, rem = 0;
    printf("\n Enter any Number: ");
    scanf("%d",&numberOne);
    
    temp = numberOne;
    while (temp > 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp /= 10;
    }

    if (numberOne == sum) {
        printf("\n %d is Armstrong number",sum);
    }
    else {
        printf("\n %d is Not Armstrong number",numberOne);
    }
    
    return 0;
}