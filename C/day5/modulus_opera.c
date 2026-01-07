#include<stdio.h>

int main()
{
    int numberOne ;

    printf("\nEnter any Number: ");
    scanf("%d",&numberOne);

    if (numberOne % 2 == 0)
    {
        printf("\n %d is Even",numberOne);
    }
    else
    {
        printf("\n %d is Odd",numberOne);
    }
      
    return 0;
}