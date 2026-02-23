#include<iostream>
using namespace std;

inline void addition(int,int);
void multiplication(int,int);

int main()
{
    int numberOne, numberTwo;
    cout<<"\n enter first number: ";
    cin>>numberOne;
    cout<<"\n enter second number: ";
    cin>>numberTwo;

    addition(numberOne,numberTwo);
    multiplication(numberOne,numberTwo);
    
    return 0;
}

inline void addition(int n1,int n2){
    cout<<"\n addition: "<<n1+n2;
}

void multiplication(int n1,int n2){
    cout<<"\n multiplication: "<<n1*n2;
}