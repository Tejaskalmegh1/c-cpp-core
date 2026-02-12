// Print all the characters with reference to the ASCII values from 0 to 255

#include <stdio.h>

int main() 
{
    for (int i = 0; i <= 255; i++) {
        printf("\n ASCII value = %d, Character = %c ", i, i);
    }

    return 0;
}
