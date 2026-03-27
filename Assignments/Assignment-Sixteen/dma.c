// Write a C program that dynamically allocate a memory for an integer array of size n (input from the user ).scan the elements of the array store them into allocated memory and display the result.

// Allow the user to enter the size of an array
// Allocate memory dynamically
// Scan the array element from the user
// And display the result

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sizeOfArray, i;
    printf("\n enter size of an array: ");
    scanf("%d",&sizeOfArray);

    int *ptr = (int*)calloc(sizeOfArray, sizeOfArray * sizeof(int));
    
    printf("\n enter elements: ");
    for (i = 0; i < sizeOfArray; i++) {
        scanf("%d",ptr+i);
    }
    printf("\n elements are: ");
    for (i = 0; i < sizeOfArray; i++) {
        printf("%d ",*(ptr+i));
    }

    free(*ptr);

    return 0;
}