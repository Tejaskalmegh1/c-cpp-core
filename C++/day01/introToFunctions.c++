#include<iostream>
using namespace std;

int addition(int,int);
int addition(int,int,int);
void addition(float,float);

int main(){
    addition(10,20);
    int result = addition(10,20,30);
    cout<<"\n Addition of three numbers: "<<result;
    addition(10.50f,14.50f);    
    return 0;
}

int addition(int numberOne, int numberTwo){
    cout<<"\n addition : "<< numberOne + numberTwo;
}

int addition(int numberOne, int numberTwo, int numberThree){
    return numberOne + numberTwo + numberThree;
}

void addition(float numberOne, float numberTwo){
    cout<<"\n addition : "<< numberOne + numberTwo;
}
