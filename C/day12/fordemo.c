#include<stdio.h>
int main()
{
    int inputNumber;
    printf("\n Enter any Number: ");
    scanf("%d",&inputNumber);

    for (int i = 1; i < 11; i++)
    {
        printf("\n %d * %d = %d",i,inputNumber,i*inputNumber);
    }

    printf("\n\n===================\n\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d",i);
    }

    printf("\n\n===================\n\n");

    for (int i = 10; i >= 1; i--)
    {
        printf("\n %d",i);
    }
    
    printf("\n\n===================\n\n");
    
    for (int i = 1; i <= 10; i++)
    {
        printf("\n Welcome to bitcode");
    }
    
    return 0;
}