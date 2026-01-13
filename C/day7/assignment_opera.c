#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter the number value : ");
    scanf("%d",&number);

    printf("\n size of variable is : %lu",sizeof(number));
    printf("\n size of char is : %lu",sizeof(char));
    printf("\n size of double %lu",sizeof(double));

    number += 45;

    printf("\n %d",number);
    
    return 0;
}