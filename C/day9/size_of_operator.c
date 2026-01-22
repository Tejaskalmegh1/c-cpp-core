#include<stdio.h>
int main(){
    int number;
    char x = 'A';
    float numberOne = 24.23;
    double numberTwo = 23.344;

    printf("\n size of int %lu",sizeof(int));
    printf("\n size of char %lu",sizeof(char));
    printf("\n size of float %lu",sizeof(float));
    printf("\n size of variable %lu",sizeof(numberTwo));
    printf("\n size of constant %lu",sizeof(56));
    return 0;
}