#include<stdio.h>

int main()
{
    int num;
    printf("\n Enter any Number: ");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf("\n Even number");
    }
    else
    {
        printf("\n Odd number");
    }
    return 0;
}