#include<stdio.h>

int main()
{
    int numberOne = 100 , numberTwo = 50;

    //printf("\n Enter two Numbers: ");
    //scanf("%d%d",&numberOne,&numberTwo);

    if (numberOne > numberTwo)
    {
        printf("\n %d is Greater than %d",numberOne,numberTwo);
    }else
    {
        printf("\n %d is Less than %d",numberOne,numberTwo);
    }
    
    if (numberOne < numberTwo)
    {
        printf("\n %d is less than %d",numberOne,numberTwo);
    }else
    {
        printf("\n %d is greater than %d",numberOne,numberTwo);
    }

    return 0;
}