// Write a C program which defines two functions, one for calculating the area of a rectangle and another for the perimeter of the rectangle.Scan the values of length and width from the user and call function to display a Proper result.

#include<stdio.h>

int calculateAreaOfRectangle(int,int);
int calculatePerimeterOfRectangle(int,int);

int main()
{
    int length, width, area, perimeter;
    printf("\n enter lenght : ");
    scanf("%d",&length);
    printf("\n enter widht: ");
    scanf("%d",&width);

    area = calculateAreaOfRectangle(length,width);
    perimeter = calculatePerimeterOfRectangle(length,width);

    printf("\n Area of Rectangle: %d",area);
    printf("\n Perimeter of Rectangle: %d",perimeter);

    return 0;
}

int calculateAreaOfRectangle(int length,int width){
    return (length * width);
}

int calculatePerimeterOfRectangle(int length,int width){
    return (2 * (length + width));
}