#include<stdio.h>
int main()
{
    int numberOne, numberTwo, choice ;
    
    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);
    
    printf("\n Ennter Second Number: ");
    scanf("%d",&numberTwo);

    printf("\n 1. Add \n 2. Sub \n 3. Multi \n 4. Div \n 5. Mod");

    printf("\n Enter your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :
        printf("\n Add: %d",numberOne+numberTwo);
        break;
    case 2 :
        printf("\n Sub: %d",numberOne-numberTwo);
        break;
    case 3 :
        printf("\n Multi: %d",numberOne*numberTwo);
        break;
    case 4 :
        printf("\n Div: %d",numberOne/numberTwo);
        break;
    case 5 :
        printf("\n Mod: %d",numberOne%numberTwo);
        break;
    default:
        printf("\n Enter Valid choice!");
        break;
    }

    return 0;
}