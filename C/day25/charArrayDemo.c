#include<stdio.h>
int main()
{
    int i = 0;
    char name[10];
    printf("\n Enter your name: ");
    scanf("%s",name);

    while (name[i] != '\0')  {
        if((i % 2 == 0) && (name[i] >= 97) && (name[i] <= 122)){
            printf("%c",name[i] - 32);
        } 
        else if((i % 2 != 0) && (name[i] >= 65) && (name[i] <= 90)) {
            printf("%c",name[i] + 32);
        }
        else{
            printf("%c",name[i]);
        }
        i++;
    }

    return 0;    
}