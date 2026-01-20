#include<stdio.h>
int main()
{
    int numberOne, numberTwo, add = 0, sub = 0, mul = 0, div = 0, mod = 0;

    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);

    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);

    add = numberOne + numberTwo ;
    sub = numberOne - numberTwo ;
    mul = numberOne * numberTwo ;
    div = numberOne / numberTwo ;
    mod = numberOne % numberTwo ;

    printf("\n Add : %d \n Sub : %d \n Multi : %d \n Div : %d \n Mod : %d",add,sub,mul,div,mod);

    return 0;
}