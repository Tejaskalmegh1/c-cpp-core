#include<stdio.h>
#include<string.h>

struct student
{
    int rollNumber;
    char name[10];
    char city[10];
    char gender;
} s2, s3;  // way 2 of creating structures

int main()
{
    // way 1 of creatinng structures
    struct student s1;
    s1.rollNumber = 100;
    strcpy(s1.name,"Tejas");
    strcpy(s1.city,"Amravati");
    s1.gender = 'M';

    printf("\nRollnumber: %d",s1.rollNumber);
    printf("\nName: %s",s1.name);
    printf("\nCity: %s",s1.city);
    printf("\nGender: %c",s1.gender);

    // array of structures
    struct student s[3];

    printf("\n enter the data: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d",&s[i].rollNumber);
        scanf("%s",s[i].name);
        scanf("%s",s[i].city);
    }
    
    for (int i = 0; i < 3; i++) {
        printf("\n Rollnumber: %d\t Name: %s\t City: %s",s[i].rollNumber,s[i].name,s[i].city);
    }   

    return 0;
}
