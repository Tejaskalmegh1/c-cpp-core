#include<stdio.h>

// Function Prototype
void MultiplicationTable(int);

int main()
{
    int InputNumber;
    printf("\n Enter any Number: ");
    scanf("%d",&InputNumber);

    // Function Calling
    MultiplicationTable(InputNumber);
    printf("\n--------------\n");
    MultiplicationTable(5);
    printf("\n--------------\n");
    MultiplicationTable(7);

    return 0;
}

// Function Definition
void MultiplicationTable(int number){
    int i = 1;
    for ( i = 1; i < 11; i++) {
        printf(" %d",number*i);
    }
}