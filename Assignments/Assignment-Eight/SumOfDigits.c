// Accept a number and print the sum of its digits

#include<stdio.h>
int main()
{
    int numberOne, temp = 0, sum = 0;
    printf("\n Enter any Number: ");
    scanf("%d",&numberOne);

    while(numberOne > 0){
        temp = numberOne % 10;
        sum += temp;
        numberOne /= 10;
    }

    printf("\n Sum of its Digits: %d",sum);
    
    return 0;
}