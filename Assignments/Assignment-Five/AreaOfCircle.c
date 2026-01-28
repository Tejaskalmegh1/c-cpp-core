// Accept radius of a circle and print area of circle

#include<stdio.h>
int main()
{
    float area = 0 , radius = 0, pi = 3.14;
    
    printf("\n Enter Radius : ");
    scanf("%f",&radius);

    area = pi * radius * radius;

    printf("\n Area of Circle: %f",area);
    return 0;
}