// Write a program in C++ to find the number and sum of all integers between 100 and 200 which are divisible by 9.

#include<iostream>
using namespace std;

int main(){
    int startingNumber, endingNumber, sum = 0;
    cout<<"\n enter starting number: ";
    cin>>startingNumber;
    cout<<"\n enter ending number: ";
    cin>>endingNumber;

    while(startingNumber <= endingNumber){
        sum += startingNumber;
        if(startingNumber++ % 9 == 0)
        cout<<"\n "<<startingNumber;
    }

    cout<<"\n sum of numbers : "<<sum;

    return 0;
}
