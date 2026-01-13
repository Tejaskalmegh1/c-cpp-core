#include<stdio.h>
int main()
{
    int number ;
    printf("\nEnter any Number: ");
    scanf("%d",&number);

    // Post Increment Operator

    printf("\n %d",number++);
    printf("\n %d",number);

    // Pre Increment Operator

    printf("\n %d",++number);
    printf("\n %d",number);

    return 0;
}