#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numberOfElements, newNumberOfElements, i;

    printf("\n Enter number of elements : ");
    scanf("%d",&numberOfElements);

    printf("\n--------- Using calloc ---------");

    int *ptrOne = (int*)calloc(numberOfElements, numberOfElements * sizeof(int));
    printf("\n Enter elements : ");
    for (i = 0; i < numberOfElements; i++) {
        scanf("%d",ptrOne+i);
    }
    printf("\n Elements are: ");
    for (i = 0; i < numberOfElements; i++) {
        printf("%d ",*(ptrOne+i));
    }

    printf("\n Enter New number of elements : ");
    scanf("%d",&newNumberOfElements);

    printf("\n--------- Using realloc ---------");

    int *ptrTwo = (int*)calloc(numberOfElements, numberOfElements * sizeof(int));
    printf("\n Enter elements : ");
    for (i = 0; i < newNumberOfElements; i++) {
        scanf("%d",ptrTwo+i);
    }
    printf("\n Elements are: ");
    for (i = 0; i < newNumberOfElements; i++) {
        printf("%d ",*(ptrTwo+i));
    }

    free(ptrOne);
    free(ptrTwo);

    return 0;
}