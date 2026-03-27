// Write a program in C++ to display the numbers in reverse order.

#include<iostream>
using namespace std;

int reverseNumber(int givenNumber);

int main(){
    int numberOne;
    cout<<"\n enter any number: ";
    cin>>numberOne;
    int numberReverse = reverseNumber(numberOne);
    cout<<"\n reverse number : "<<numberReverse;
    return 0;
}

int reverseNumber(int givenNumber){

    int temp, rev = 0;
    while(givenNumber != 0){
        temp = givenNumber % 10;
        rev = rev * 10 + temp;
        givenNumber /= 10;
    }
    
    return rev;
}