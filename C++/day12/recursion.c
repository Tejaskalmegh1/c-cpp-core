#include<stdio.h>

int factorialOfNumber(int n){
    if(n == 0){
        return 1;
    } else {
        return n * factorialOfNumber(n - 1);
    }
}

int main(){
    int number = 5, result = 0;
    result = factorialOfNumber(number);
    printf("\n Result is : %d ",result);
    return 0;
}