// Dynamic memory allocation :- calloc

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, numberOfElement;
    printf("\n enter number of elements: ");
    scanf("%d",&numberOfElement);
    
    int * ptr = (int*)calloc(numberOfElement, numberOfElement * sizeof(int));

    printf("\n enter elements : ");
    for ( i = 0; i < numberOfElement; i++) {
        scanf("%d",ptr + i);
    }

    printf("\n elements : ");
    for ( i = 0; i < numberOfElement; i++) {
        printf("%d ", *(ptr + i));
    }

    free(ptr);

    return 0;    
}