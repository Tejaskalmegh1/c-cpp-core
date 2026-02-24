#include<iostream>
using namespace std;

void swapOfNumbers(int &n1, int &n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int numberOne, numberTwo;
    cout<<"\n enter first number: ";
    cin>>numberOne;
    cout<<"\n enter second number: ";
    cin>>numberTwo;

    cout<<"\n- - - Before Swap - - -";
    cout<<"\n first number: "<<numberOne;
    cout<<"\n second number: "<<numberTwo;

    swapOfNumbers(numberOne,numberTwo);

    cout<<"\n- - - After Swap - - -";
    cout<<"\n first number: "<<numberOne;
    cout<<"\n second number: "<<numberTwo;

    return 0;
}