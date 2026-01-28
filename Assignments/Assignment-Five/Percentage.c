// Accept marks in 3 subject, calculate total, percentage.

#include<stdio.h>
int main()
{
    float subjectOne, subjectTwo, subjectThree, Percentage = 0 , TotalMarks = 0;

    printf("\nEnter First Subject Marks: ");
    scanf("%f",&subjectOne);
    
    printf("\nEnter Second Subject Marks: ");
    scanf("%f",&subjectTwo);

    printf("\nEnter Third Subject Marks: ");
    scanf("%f",&subjectThree);

    TotalMarks = subjectOne + subjectTwo + subjectThree;
    printf("\nTotal Marks Obtain: %.2f",TotalMarks);
    
    Percentage = (TotalMarks / 300) * 100;
    printf("\nPercentage: %.2f",Percentage);

    return 0;
}