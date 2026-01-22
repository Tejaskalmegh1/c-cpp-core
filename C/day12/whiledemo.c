#include<stdio.h>
int main()
{
    int i = 100;                  // initialization
    int inputNumber;
    
    while (i <= 120)              // condition
    {
        if (i % 2 == 0)
        {
            printf("\n %d",i);
        }
        i++;                      // increment 
    }

    printf("\n\n===================\n\n");

    printf("\n Enter any Number: ");
    scanf("%d",&inputNumber);
    i = 1;
    while (i < 11)
    {
         printf("\n %d * %d = %d",i,inputNumber,i*inputNumber);
         i++;
    }

    printf("\n\n===================\n\n");

     i = 1;
    while (i <= 10)
    {
         printf("\n%d",i);
         i++;
    }

    printf("\n\n===================\n\n");

     i = 10;
    while (i >= 1)
    {
         printf("\n%d",i);
         i--;
    }

    printf("\n\n===================\n\n");   
    
    return 0;
}