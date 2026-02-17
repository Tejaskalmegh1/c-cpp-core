#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arraySize;
    printf("\n Enter size of array: ");
    scanf("%d",&arraySize);

    char *ptr = (char*)malloc(arraySize * sizeof(char));

    printf("\n Enter string: ");
    scanf("%s",ptr);
    printf("\n your string: ");
    int i = 0;
    while (*(ptr+i) != '\0') {
        printf("%c",*(ptr+i));
        i++;
    }
    
    int countOfLowerCase = 0, countOfUpperCase = 0;
    i = 0;
    while (*(ptr+i) != '\0') {
        if ((*(ptr+i) >= 97) && (*(ptr+i) <= 122)) {
            countOfLowerCase++;
        }
        else {
            countOfUpperCase++;
        } 
    }
    
    printf("\n Lowercase are: %d",countOfLowerCase);
    printf("\n Uppercase are: %d",countOfUpperCase);

    free(ptr);

    return 0;
}