#include<iostream>
#include<string>
using namespace std;

class Student{
    int rollNumber;
    string name;

    void disply(){
        cout<<"Student disply method called";
    }
};

int main()
{
    Student s;
    return 0;
}