// Accept a number and check whether it is a palindrome or not

#include<stdio.h>
int main()
{
    int numberOne, numberTwo, rev = 0, rem = 0 ;
    printf("\n Enter any Number: ");
    scanf("%d",&numberOne);

    numberTwo = numberOne;

    while (numberTwo > 0) {
        rem = numberTwo % 10 ;
        rev = rev * 10 + rem ;
        numberTwo /= 10;
    }

    if (numberOne == rev) {
        printf("\n %d is Palindrome number ",rev);
    }
    else{
        printf("\n %d is Not Palindrome number ",rev);
    }
    
    return 0;
}