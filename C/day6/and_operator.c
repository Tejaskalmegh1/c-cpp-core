#include<stdio.h>

int main()
{
    int number;
    printf("\n Enter any number: ");
    scanf("%d",&number);

    if ((number % 5 == 0)  && (number % 3 == 0)) {
        printf("\n %d is divisible by 5 and 3",number);
    }
    else {
        printf("\n %d is not divisible by 5 and 3",number);
    }
    return 0 ;
}