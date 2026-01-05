#include<stdio.h>

int main()
{
    int NumberOne ;
    float NumberTwo, NumberThree, result ;
    double NumberFour ;

    printf("\n Enter First Number: ");
    scanf("%d",&NumberOne);
    
    printf("\n Enter Second Number: ");
    scanf("%f",&NumberTwo);
    
    printf("\n Enter Third Number: ");
    scanf("%f",&NumberThree);
    
    result = NumberTwo +  NumberThree ;
    
    printf("\n Result is: %f",result);

    printf("\n Size of int: %lu",sizeof(int));
    printf("\n Size of char: %lu",sizeof(177.77f));
    printf("\n Size of int: %lu",sizeof(NumberThree));

    return 0;
}