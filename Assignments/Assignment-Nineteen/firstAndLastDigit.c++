// Write a program in C++ to find the first and last digits of a number.

#include<iostream>
using namespace std;

int firstAndLastDigit(int givenNumber, int *firstDigit, int *lastDigit);

int main(){
    int givenNumber, firstDigit, lastDigit;
    cout<<"\n enter any number : ";
    cin>>givenNumber;

    firstAndLastDigit(givenNumber, &firstDigit, &lastDigit);

    cout<<"\n first digit : "<<firstDigit;
    cout<<"\n last digit : "<<lastDigit;

    return 0;
}

int firstAndLastDigit(int givenNumber, int *firstDigit, int *lastDigit){
    
    int temp = givenNumber;

    while(givenNumber > 0){
        if(givenNumber == temp)
        *lastDigit = givenNumber % 10;

        if(givenNumber > 0)
        *firstDigit = givenNumber;
        
        givenNumber /= 10;
    }
    return 0;
}