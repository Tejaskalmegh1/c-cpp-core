// take upper latters string input and print it in lower case

#include<stdio.h>
int main()
{
    char name[10];
    int i = 0;
    printf("\n Enter any String: ");
    scanf("%s",name);
    while (name[i] != '\0') {
        if ((name[i] >= 32) && (name[i] <= 97)) {
            printf("%c",name[i] + 32);
        }
        else {
            printf("%c",name[i]);
        }
        i++;
    }

    return 0;
}