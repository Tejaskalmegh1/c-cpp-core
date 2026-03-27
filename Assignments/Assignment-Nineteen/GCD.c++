// Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

#include<iostream>
using namespace std;

int greatestCommonDivisor(int numberOne, int numberTwo);

int main(){
    int numberOne, numberTwo;
    cout<<"\n enter first number: ";
    cin>>numberOne;
    cout<<"\n enter second number: ";
    cin>>numberTwo;

    int gcd = greatestCommonDivisor(numberOne, numberTwo);
    cout<<"\n greatest common divisor is : "<<gcd;
    return 0;
}

int greatestCommonDivisor(int numberOne, int numberTwo){
    
    int temp  = 0;
    while(numberTwo != 0){
        temp = numberTwo;
        numberTwo = numberOne % numberTwo;
        numberOne = temp;
    }

    return temp;
}