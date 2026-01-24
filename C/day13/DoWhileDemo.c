#include<stdio.h>
int main()
{
    int inputNumber, i = 1;
    printf("\n Enter any Number: ");
    scanf("%d",&inputNumber);

    do
    {
        printf("\n %d ",inputNumber*i);
        i++;

    } while (i < 11);
    
    int sumEven = 0, sumOdd = 0;
    i = 20 ;

    do
    {
        if (i % 2 == 0) {
            sumEven += i;
        }

        else {
            sumOdd += i;
        } 
        i++;       
    } while (i < 41);
    
    printf("\n Sum of all Even Numbers from 20 to 40: %d",sumEven);
    printf("\n Sum of all Odd Numbers from 20 to 40: %d",sumOdd);

    return 0;
}