// lower to upper string 

#include<stdio.h>
int main()
{
    char name[10] = {"tejas"};
    int i = 0;
    while (name[i] != 0) {
        if ((name[i] >= 97) && (name[i] <= 122)) {
            printf("%c",name[i] - 32);
        }
        else {
            printf("%c",name[i] );
        }
        i++;
    }

    return 0;
}