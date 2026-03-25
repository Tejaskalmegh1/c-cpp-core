// 23 / 03 / 26

#include<iostream>
using namespace std;

class Person{
    private :
    string aadharNumber;
    string name;

    public:
    Person(){
        this->aadharNumber = "12345";
        this->name = "tejas";
    }

    Person(string aadharNumber, string name) {
        this->aadharNumber = "67890";
        this->name = name;
    }

    virtual void displayDetails() {
        cout<<"Person Details: \n"<<"name : "<<name<<"\n"<<"aadharNumber : "<<aadharNumber<<endl;
    }
};

class Student: public Person{
    private:
    int rollNumber;

    public:
    Student(){
        this->rollNumber = 77;
    }

    Student(int rN){
        this->rollNumber = rN;
    }

    void displayDetails() {
        cout<<"roll number is : "<<rollNumber<<endl;
    }
}; 

int main(){
    Student *sptr = new Student(144);
    sptr->displayDetails();

    Person *pPtr = new Person("123","Ritika");
    pPtr->displayDetails();

    Person *p1 = new Student(777);      // whithout creating virtual keyword
    p1->displayDetails();

    return 0;
}