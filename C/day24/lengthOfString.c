// calculate length of string

#include<stdio.h>
int main()
{
    char name[10] = {"tejas"};
    int lengthOfString = 0;

    for (int i = 0; name[i] != '\0'; i++) {
        lengthOfString++;
    }
    
    printf("\n Length of string: %d",lengthOfString);

    return 0;
}