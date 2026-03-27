// Write  a C program that defines a function to calculate the power of a number x.the function should take two arguments x and n (value should be taken from the user ) and calculate the power of a number x ^ n , display the result.

// Input x = 2 , n = 4 
// x^n  =  2 * 2 * 2 * 2 = 16
// Output  : x^n = 16 

#include<stdio.h>

int calculatePowerOfNumber(int, int);

int main()
{
    int x, n;
    printf("\n enter a number: ");
    scanf("%d",&x);
    printf("\n enter power: ");
    scanf("%d",&n);

    int result = calculatePowerOfNumber(x,n);

    printf("\n result: %d",result);
}

int calculatePowerOfNumber(int x, int n){
    int result = 1;
    for (int i = 1; i <= n; i++) {
         result = result * x;
    }
    return result ;
}