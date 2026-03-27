// Write a program in C++ to calculate the product of the digits of any number.

#include<iostream>
using namespace std;

int productOfDigit(int givenNumber);

int main(){
    int numberOne, product;
    cout<<"\n enter any number : ";
    cin>>numberOne;
    product = productOfDigit(numberOne);
    cout<<"\n product of the digits : "<<product;
    return 0;
}

int productOfDigit(int givenNumber){
    int temp = 0, sum = 0;
    while(givenNumber != 0){
        temp = givenNumber % 10;
        sum += temp;
        givenNumber /= 10;
    }

    return sum;
}