#include<stdio.h>
#define PI 3.14
#define ADD(a,b) (a+b)
#define SUB(a,b) (a-b)
#define AREA_OF_CIRCLE(r) (PI*r*r)

int main()
{
    printf("\n Addition is : %d",ADD(10,20));
    printf("\n Addition is : %lf",ADD(17.50,15.49));
    printf("\n Addition is : %f",ADD(17.50,30.49));
    printf("\n Area of Circle is : %f",AREA_OF_CIRCLE(7.5));

    return 0;
}