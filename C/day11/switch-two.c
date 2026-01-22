#include<stdio.h>
int main()
{
    int numberOne, numberTwo, Result;
    char choice;

    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);
    
    printf("\n Ennter Second Number: ");
    scanf("%d",&numberTwo);

    printf("\n a. Post Increment \n b. Pre Decrement \n c. Ternery Operator ");

    printf("\n Enter your Choice: ");
    scanf("%s",&choice);

    switch(choice)
    {
        case 'a':
         printf("\n Post Increment: %d",numberOne++);
         break;
        case 'b':
         printf("\n Pre Decrement: %d ",--numberTwo);
         break;
        case 'c':
         Result = numberOne > numberTwo ? numberOne : numberTwo;
         printf("\n Result: %d",Result);
         break;
        default:
         printf("\n Enter valid choice!");

    }
    return 0;
}