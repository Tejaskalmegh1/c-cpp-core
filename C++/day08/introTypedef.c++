// 24 / 03 / 26

#include<iostream>
#include<typeinfo>
using namespace std;

template <typename T>
void swapOfNumbers(T,T);

int main(){
    int numberOne, numberTwo;
    cout<<"\n enter first number: ";
    cin>>numberOne;
    cout<<"\n enter second number: ";
    cin>>numberTwo;
    swapOfNumbers<int>(numberOne,numberTwo);
    return 0;
}

template <typename T>
void swapOfNumbers(T num1,T num2){
    int temp ;
    cout<<"\n swap of two numbers";
    cout<<"\n before swap : "<<num1<<" "<<num2<<endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"\n after swap : "<<num1<<" "<<num2<<endl;
}