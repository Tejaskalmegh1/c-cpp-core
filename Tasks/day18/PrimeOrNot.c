// Take start and end value from user and print prime numbers between them

#include<stdio.h>

// Function Prototype
int IsPrimeOrNot(int,int);

int main()
{
    int StartingValue, EndingValue;

    printf("\n Enter Starting Value : ");
    scanf("%d",&StartingValue);
    printf("\n Enter End Value: ");
    scanf("%d",&EndingValue);

    IsPrimeOrNot(StartingValue,EndingValue);

    return 0;
}

int IsPrimeOrNot(int StartValue, int EndValue){
     
    int i, j, flag;
    printf("\n Prime Numbers : ");
    for (i = StartValue; i <= EndValue; i++) {
        if (i <= 1){
            continue;
        }    
        flag = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("%d ", i);
        }    
    }
    return 0;
}
