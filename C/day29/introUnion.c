#include<stdio.h>

union student {
    int rollNumber;
    char gender;
    char name[10];
    char city[10];
};

int main() 
{
    union student s1;
    printf("\n enter your roll number: ");
    scanf("%d",&s1.rollNumber);
    printf("\n enter your name: ");
    scanf("%s",s1.name);
    printf("\n enter your city: ");
    scanf("%s",s1.city);

    printf("\n Roll number: %d",s1.rollNumber);
    printf("\n Name: %s",s1.name);
    printf("\n City: %s",s1.city);

}