#include<stdio.h>

void table(int*);
void checkEvenOrOdd(int*);
void checkPrimeOrNot(int*);
void checkArmstrongOrNot(int*);

int main()
{
    int numberOne;

    printf("\n Enter any Number: ");
    scanf("%d",&numberOne);

    table(&numberOne);
    checkEvenOrOdd(&numberOne);
    checkPrimeOrNot(&numberOne);
    checkArmstrongOrNot(&numberOne);

    return 0;
}

void table(int* num){
    printf("\n Table of %d : \n",*num);
    for (int i = 1; i < 11; i++) {
        printf(" %d",(*num) * (i));
    }    
}

void checkEvenOrOdd(int* num){
    if ((*num) % 2 == 0) {
        printf("\n %d is Even Number",*num);
    }
    else {
        printf("\n %d is Odd Number",*num);
    }
}

void checkPrimeOrNot(int* num){
    if (((*num) % (*num) == 0) && ((*num) % 2 != 0)) {
        printf("\n %d is Prime Number",*num);
    }
    else {
        printf("\n %d is Not Prime Number",*num);
    }
}

void checkArmstrongOrNot(int* num){
    int tempOne, tempTwo, sum = 0;
    tempOne = *num ;
    while (tempOne > 0) {
        tempTwo = tempOne % 10;
        sum += (tempTwo * tempTwo * tempTwo);
        tempOne /= 10;
    }
    if (sum == *num) {
        printf("\n %d is Armstrong Number", *num);
    }
    else {
        printf("\n %d is Not Armstrong Number", *num);
    }
}