#include<stdio.h>

int main()
{
    float total , percentage , english , maths , science ;
    
    printf("\n Marks obtain in English: ");
    scanf("%f",&english);
    printf("\n Marks obtain in Maths: ");
    scanf("%f",&maths);
    printf("\n Marks obtain in Science: ");
    scanf("%f",&science);

    total = english + maths + science ;
    percentage = ((total)/(20*3)) * 100;

    printf("\n Percentage: %.2f",percentage);

    if ((percentage > 39) && (percentage < 55)) {
        printf("\n Pass Class!");
    }
    else if ((percentage > 55) && (percentage < 65)) {
        printf("\n Second Class!");
    }
    else if ((percentage > 64) && (percentage < 75)) {
        printf("\n First Class!");
    }
    else if ((percentage > 74) && (percentage < 100)) {
        printf("\n Distinction Class!");
    }
    else{
        printf("\n Not Pass!");
    }   

    return 0;
}