#include<stdio.h>
int main()
{
    int i = 0, cntUpperCase = 0, cntLowerCase = 0, cntSpCharacter = 0, cntDigits = 0;
    char name[10];
    printf("\n Enter your name: ");
    scanf("%s",name);

    while (name[i] != '\0')  {
        if((name[i] >= 97) && (name[i] <= 122)){
            cntLowerCase++;
        } 
        else if((name[i] >= 65) && (name[i] <= 90)) {
            cntUpperCase++;
        }
        else if((name[i] >= 48) && (name[i] <= 57)) {
            cntDigits++;
        }
        else {
            cntSpCharacter++;
        }
        i++;
    }
    
    printf("\n Lower case count: %d",cntLowerCase);
    printf("\n Upper case count: %d",cntUpperCase);
    printf("\n Digit count: %d",cntDigits);
    printf("\n Special character count: %d",cntSpCharacter);

    return 0;    
}