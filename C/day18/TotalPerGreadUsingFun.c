#include<stdio.h>

float CalculateTotalMarks(float, float, float);
float PercentageCalculation(float);
float GradeCalculation(float);

int main()
{
    float subjectOne, subjectTwo, subjectThree, TotalMarks, Percentage;

    printf("\n Enter First Subject marks: ");
    scanf("%f",&subjectOne);
    printf("\n Enter Second Subject Marks: ");
    scanf("%f",&subjectTwo);
    printf("\n Enter Third Subject Marks: ");
    scanf("%f",&subjectThree);

    TotalMarks = CalculateTotalMarks(subjectOne,subjectTwo,subjectThree);
    Percentage = PercentageCalculation(TotalMarks);
    GradeCalculation(Percentage);

    return 0;
}

float CalculateTotalMarks(float subOne,float subTwo,float subThree){
    return subOne + subTwo + subThree;
}

float PercentageCalculation(float TotalMarks){
    printf("\n Total Marks Obtain: %.2f",TotalMarks);
    return (((TotalMarks) / (20.0f * 3.0f)) * 100);
}

float GradeCalculation(float Percentage){
    printf("\n Percentage: %.2f",Percentage);

    if ((Percentage > 0) && (Percentage < 40)) {
        printf("\n Fail");
    }
    else if ((Percentage >= 40) && (Percentage < 60)) {
        printf("\n Second Class");
    }
    else if ((Percentage >= 60) && (Percentage < 75)) {
        printf("\n First Class");
    }
    else {
        printf("\n Distingstion ");
    }

    return 0;
}