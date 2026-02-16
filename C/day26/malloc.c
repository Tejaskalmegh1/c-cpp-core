// Dynamic memory allocation :- malloc 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numberOfElements;
    printf("\n enter number of elements: ");
    scanf("%d",&numberOfElements);

    char *ptr = (char*)malloc(numberOfElements * sizeof(char));

    printf("\n enter the string: ");
    scanf("%s",ptr);

    printf("\n your string: ");
    for (int i = 0; *(ptr +i) != '\0'; i++) {
        printf("%c",*(ptr + i));
    }
    
    free(ptr);

    return 0;
}