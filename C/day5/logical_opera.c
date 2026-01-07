#include<stdio.h>

int main()
{
    int numberOne, numberTwo, numberThree ;

    printf("\nEnter Three Numbers: ");
    scanf("%d%d%d",&numberOne,&numberTwo,&numberThree);

    if ( (numberOne > numberTwo) && (numberOne > numberThree))
    {
        printf("\n %d is greatest",numberOne);
    }
    else if ( (numberTwo > numberThree) && (numberTwo > numberThree) )
    {
        printf("\n %d is greatest",numberTwo);
    }
    else
    {
        printf("\n %d is greatest",numberThree);
    }
      
    return 0;
}