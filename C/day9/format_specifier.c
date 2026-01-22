#include<stdio.h>
int main(){
    char a = 'A';
    float numberOne, numberTwo, result;
    printf("\n Enter the numbers : ");
    scanf("%f%f",&numberOne,&numberTwo);
    result = numberOne + numberTwo;
    printf("\n Result is : %f",result);

    printf("\n char is : %c",a);
    printf("\n char ASCII value is : %d",a);
    return 0;
}