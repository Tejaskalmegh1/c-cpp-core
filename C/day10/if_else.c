#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter any Number: ");
    scanf("%d",&number);
    if (number % 3 == 0) {
        printf("\n %d is Divisible by 3",number);
    }
    else {
        printf("\n %d is Not Divisible by 3",number);
    }

    return 0 ;    
}