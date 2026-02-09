#include<stdio.h>

int add(int*,int*);
int sub(int*, int*);
void multi(int*,int*);
void div(int*,int*);

int main(){
    int numberOne, numberTwo, resultAdd = 0, resultSub = 0;

    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);

    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);

    resultAdd = add(&numberOne,&numberTwo);
    printf("\n Add: %d",resultAdd);
    resultSub = sub(&numberOne,&numberTwo);
    printf("\n Sub: %d",resultSub);
    multi(&numberOne,&numberTwo);
    div(&numberOne,&numberTwo);

    return 0;    
}

int add(int* numOne,int* numTwo){
    return *numOne + *numTwo;
}

int sub(int* numOne,int* numTwo){
    return *numOne - *numTwo;
}

void multi(int* numOne,int* numTwo){

    printf("\n Multi: %d",(*numOne) * (*numTwo));
}

void div(int* numOne,int* numTwo){
    printf("\n Div: %d",(*numOne) / (*numTwo));
}