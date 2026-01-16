// 15 jan 2026

// Write a C program which will scan one character ( ch ) from the user and check whether the given character is vowel or Consonant using an if-else statement.

// if the character is  ‘A’ , ’E’ , ‘I’ , ‘O’ , ‘U’  OR  ‘a’ , ‘e’ , ‘I’ , ‘o’ , ‘u’  then it should display the result as “VOWEL” and “CONSONANT”  for all rest characters.

#include<stdio.h>
int main()
{
    char ch ;
    
    
    printf("\n Enter the Character: ");
    scanf("%s",&ch);

    // if (ch >= 0)
    // {
    //     printf("\n Valid");
    // }
    

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("\n VOWEL ");
    }
    
    else if (ch == 'b' || ch == 'c' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'v' || ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z') {
        printf("\n CONSONANT ");
    }

    else if (ch == 'B' || ch == 'C' || ch == 'D' || ch == 'F' || ch == 'G' || ch == 'H' || ch == 'J' || ch == 'K' || ch == 'L' || ch == 'M' || ch == 'N' || ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') {
         printf("\n CONSONANT ");
    }

    else {
      printf("\n Invalid character!");
    }
    
    return 0;
}