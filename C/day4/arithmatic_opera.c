#include<stdio.h>

int main()
{
    int numberOne , numberTwo , resultAdd = 0, resultSub = 0, resulMulti = 0, resultDiv = 0, resultMod = 0;

    printf("\n Enter Two Numbers:  ");
    scanf("%d%d",&numberOne,&numberTwo);
    
    resultAdd = numberOne + numberTwo ;
    resultSub = numberOne - numberTwo ;
    resulMulti = numberOne * numberTwo ;
    resultDiv = numberOne / numberTwo ;
    resultMod = numberOne % numberTwo ;

    printf("\n Result of Addition: %d",resultAdd);
    printf("\n Result of Substraction: %d",resultSub);
    printf("\n Result of Multiplication: %d",resulMulti);
    printf("\n Result of Division: %d",resultDiv);
    printf("\n Result of Modulus: %d",resultMod);

    return 0;
}