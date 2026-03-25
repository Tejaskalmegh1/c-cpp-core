// 25 / 03 / 26

#include<iostream>
using namespace std;

class MathematicalOperations{
    private:
    int numberOne;
    int numberTwo;

    public:
    MathematicalOperations(){
        this->numberOne = 10;
        this->numberTwo = 23;
    }

    MathematicalOperations(int n1, int n2){
        this->numberOne = n1;
        this->numberTwo = n2;
    }

    MathematicalOperations operator+(MathematicalOperations &m){
        MathematicalOperations m3;
        m3.numberOne = this->numberOne + m.numberOne;
        m3.numberTwo = this->numberTwo + m.numberTwo;
        return m3;
    }

     MathematicalOperations operator-(MathematicalOperations &m){
        MathematicalOperations m3;
        m3.numberOne = this->numberOne - m.numberOne;
        m3.numberTwo = this->numberTwo - m.numberTwo;
        return m3;
    }

     MathematicalOperations operator*(MathematicalOperations &m){
        MathematicalOperations m3;
        m3.numberOne = this->numberOne * m.numberOne;
        m3.numberTwo = this->numberTwo * m.numberTwo;
        return m3;
    }

     MathematicalOperations operator/(MathematicalOperations &m){
        MathematicalOperations m3;
        m3.numberOne = this->numberOne / m.numberOne;
        m3.numberTwo = this->numberTwo / m.numberTwo;
        return m3;
    }

    void display(){
        cout<<numberOne<<" "<<numberTwo<<endl;
    }
};

int main(){
    MathematicalOperations m1(10,10), m2(5,5), add, sub, div, multi;
    add = m1 + m2;
    add.display();

    sub = m1 - m2;
    sub.display();

    multi = m1 * m2;
    multi.display();

    div = m1 / m2;
    div.display();

    return 0;

}