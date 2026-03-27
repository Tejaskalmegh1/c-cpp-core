// Write a program in C++ to find the LCM of any two numbers using HCF.

#include<iostream>
using namespace std;

int findHCF(int numberOne, int numberTwo);

int main(){
    int numberOne, numberTwo, LCM;
    cout<<"\n enter first number : ";
    cin>>numberOne;
    cout<<"\n enter second number : ";
    cin>>numberTwo;

    int HCF = findHCF(numberOne, numberTwo);
    
    LCM = (numberOne * numberTwo) / HCF;

    cout<<"\n LCM : "<<LCM;
    cout<<"\n HCF : "<<HCF;

    return 0;
}

int findHCF(int numberOne, int numberTwo){
    while(numberTwo != 0){
        int temp = numberTwo;
        numberTwo = numberOne % numberTwo;
        numberOne = temp;
    }
    return numberOne;
}