#include<iostream>
using namespace std ;

int main()
{
    int numberOne;
    cout<<"\n enter value of first number: ";
    cin>>numberOne;

    int &reference = numberOne;
    cout<<"\n value of reference variable: "<<reference;
    cout<<"\n value of first number: "<<numberOne;

    numberOne = 100;
    cout<<"\n value of reference variable: "<<reference;
    cout<<"\n value of first number: "<<numberOne;

    reference = 200;
    cout<<"\n value of refrence variable: "<<reference;
    cout<<"\n value of first number: "<<numberOne;

    return 0;
}