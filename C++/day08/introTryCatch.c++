// 24 / 03 / 26

#include<iostream>
using namespace std;

int main() {
    int numberOne, numberTwo, result = 0;
    cout<<"\n enter first number : ";
    cin>>numberOne;
    cout<<"\n enter second number: ";
    cin>>numberTwo;

    try{
        if(numberTwo <= 0) {
            throw "second number is less than or equals zero";
        } else {
            result = numberOne/numberTwo;
        }
    }catch(const char * e) {
        cout<<e<<endl;
    }

    return 0;
}