//Accept a no and print whether it is a prime no.

#include <stdio.h>
int main() 
{
    int inputNumber, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    if (inputNumber <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= inputNumber; i++) {
            if (inputNumber % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number\n", inputNumber);
    else
        printf("%d is not a prime number\n", inputNumber);

    return 0;
}