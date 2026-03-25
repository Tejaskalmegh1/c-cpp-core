// 04 / 03 / 26

#include<iostream>
using namespace std;

//inheritance
//Base class Person
class Person{
    private:
    string name;
    string gender;
    string bloodGroup;

    public:
    Person(){
        cout<<"\nPerson Default constructor called"<<endl;
        this->name = "Aboli";
        this->gender = "Female";
        this->bloodGroup = "A+";
    }

    Person(string name,string gender,string bloodGroup){
        cout<<"\nPerson Parameterized constructor called"<<endl;
        this->name = name;
        this->gender = gender;
        this->bloodGroup = bloodGroup;
    }

    void displayPersonDetails(){
        cout<<"\n Person Details : "<<"name : "<<name<<"gender : "<<gender<<endl;
    }

    //destructor 
    ~Person(){
        cout<<"\n Person Destructor called"<<endl;
    }
};


//Derived class Student
class Student : public Person{
    private:
    int rollNumber;
    int batchId;
    string batchName;

    public:
    Student(){
        cout<<"\n Student Default constructor called"<<endl;
        this->batchId = 145;
        this->batchName = "Web Full Stack";
        this->rollNumber = 12342;
    }

    Student(int rollNumber, int batchId, string batchName){
        cout<<"\n Student parameterized constructor called"<<endl;
        this->rollNumber = rollNumber;
        this->batchId = batchId;
        this->batchName = batchName;
    }

    void displayStudentDetails(){
        cout<<"\n Display Students Details : "<<"rollNumber"<<rollNumber<<"bacth Id : "<<batchId<<endl;
    }

    ~Student(){
        cout<<"\n Student desctructor called"<<endl;
    }
};

//Derived class Trainer
class Trainer : public Person{
    private:
    int yearsOfExp;
    string areaOfExpertise;

    public:
    Trainer(){
        cout<<"\n Trainer Default constructor called"<<endl;
        this->yearsOfExp = 12;
        this->areaOfExpertise = "iOS";
    }

    Trainer(int yearsOfExp, string expertise){
        cout<<"\n Trainer parameterized constructor called"<<endl;
        this->yearsOfExp = yearsOfExp;
        this->areaOfExpertise = expertise;
    }

    void displayTrainerDetails(){
        cout<<"\n Display Trainer Details : "<<"\nyearsOfExp : "<<yearsOfExp<<"\nareaOfExpertise"<<areaOfExpertise<<endl;
    }

    ~Trainer(){
        cout<<"\n Trainer dectructor called"<<endl;
    }
};

int main(){
    Student s1;
    Trainer t1;
    s1.displayStudentDetails();
    t1.displayTrainerDetails();
    return 0;
}
