#include<stdio.h>      //preprocessor statement

int main(){
    int number,numberTwo, result = 0;         //declaration of a variable
    number = 234;       //assignment 
    int numberOne = 103;            //initialization of varible

    printf("\n Welcome to C Batch!");
    printf("\n Welcome to Bitcode");
    
    printf("\n Enter The numbers : ");
    scanf("%d",&number);
    scanf("%d%d",&numberOne,&numberTwo);
   
    result = numberOne + numberTwo;
    printf("\n result is : %d ",result);
    return 0;
}