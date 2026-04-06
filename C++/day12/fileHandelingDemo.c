// 06 / 04 / 26

#include<stdio.h>

int main(){
    FILE *fptr;
    char message[50];

    fptr = fopen("fileOne.txt","w");
    int pos = ftell(fptr);
    printf("\n Position is : %d",pos);

    if(fptr != NULL){
        fprintf(fptr,"Welcome to BitCode");
    }

    pos = ftell(fptr);
    printf("\n Position is : %d",pos);

    fgets(message,100,fptr);

    printf("\n message is : %s", message);

    pos = ftell(fptr);
    printf("\n Position is : %d",pos);

    fseek(fptr,0,SEEK_SET);

    pos = ftell(fptr);
    printf("\n Position is : %d",pos);

    fseek(fptr,0,SEEK_END);

    pos = ftell(fptr);
    printf("\n Position is : %d",pos);

    fclose(fptr);
    return 0;
}
