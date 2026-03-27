// Write a program which can implement the  following criteria using the functions and global variables using Switch-case statement.

// Display the proper Menu for Given cases and separate functions for each case and create a global variable called PI = 3.14 .

// Ask the user to select an option and perform the following operations in a function using switch case  and display the result.

// Case 1 - To Calculate the Area of a Circle. (A=πr2)
// Case 2 - To Calculate the Circumference of a Circle. (C=2πr)
// Case 3 - To Calculate the Volume of a Sphere. (V=(4/3)πr3)


#include<stdio.h>

int Operations(float,int);

float Pi = 3.14;

int main()
{
    float radius;
    int op;
    printf("\n enter radius of circle: ");
    scanf("%f",&radius);

    printf("\n press 1 To Calculate the Area of a Circle");
    printf("\n press 2 To Calculate the Circumference of a Circle");
    printf("\n press 3 To Calculate the Volume of a Sphere");
    printf("\n enter your choice: ");
    scanf("%d",&op);

    Operations(radius,op);
    
    return 0;
}

int Operations(float radius, int op){
    switch (op) {
        case 1 :
        printf("\n Area of a Circle: %f",(Pi*(radius*radius)));
        break;

        case 2 :
        printf("\n Circumference of a Circle: %f",(2 * Pi * radius));
        break;

        case 3 :
        printf("\n Volume of a Sphere: %f",((3/4) * (Pi * (radius*radius*radius))));
        break;

        default :
        printf("\n Enter valid choice ");

    }
    return 0;
}