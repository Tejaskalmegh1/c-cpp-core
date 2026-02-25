#include<iostream>
#include<string>
using namespace std;

class Student {
    //data member
    private:
    int rollNumber;
    string name;
    string gender;
    string bloodGroup;

    public:
    // default constructure
    Student(){
        this->rollNumber =  10;
        this->name = "tejas";
        this->gender = "male";
        this->bloodGroup = "O+";
    }

    // parameterized constructor 
    Student(int rollNumber, string name, string gender, string bloodGroup){
        this->rollNumber = rollNumber;
        this->name = name;
        this->gender = gender;
        this->bloodGroup = bloodGroup;
    }

    // copy constructor
    Student(Student &obj) {
        this->rollNumber = obj.rollNumber;
        this->name = obj.name;
        this->gender = obj.gender;
        this->bloodGroup = obj.bloodGroup;
    }

    //member function
    void display(){
        cout<<"\n student display method called ";
        cout<<"\n roll number: "<<rollNumber;
        cout<<"\n name: "<<name;
        cout<<"\n gender: "<<gender;
        cout<<"\n blood group: "<<bloodGroup;
    }
};

int main()
{
    Student s,s1(123,"pranit","male","A+"), s2(s1);
    s.display();
    s1.display();
    s2.display();
    return 0;
}