#include<stdio.h>

void add(int, int);
void percentage(float);
void percentage(float);

int main()
{
    int numberOne, numberTwo, numberThree, t1 = 0;
    
    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);
    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);
    printf("\n Enter Third Number: ");
    scanf("%d",&numberThree);

    add( numberOne,  numberTwo); // Passing Argument to the function
    t1 = total(numberOne, numberTwo, numberThree); 
    percentage(t1); // calling function

    return 0;
}

// Function Defination
void add(int num1, int num2){
    printf("\n Addition: %d",num1+num2);
}

int total(float num1, float num2, float num3){
    return num1 + num2 + num3;
}

void percentage(float total){
    printf("\n Percentage is : %.2f",( (total / (20*3)) * 100));
}
