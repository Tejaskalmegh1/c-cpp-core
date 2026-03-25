// 24 / 03 / 26

#include<iostream>
#include<typeinfo>
using namespace std;

template <typename T>
class MathematicalOperation
{
    public:
    T num1;
    T num2;

    void input(){
        cout<<"\n enter first number: ";
        cin>>num1;
        cout<<"\n enter second number: ";
        cin>>num2;
    }
    

    void add() {
        T result = num1 + num2;
        cout<<"\n addition: "<<result;
    }

    void sub(){
        T result = num1 - num2;
        cout<<"\n substration: "<<result;
    }

    void multi(){
        T result = num1 * num2;
        cout<<"\n multition: "<<result;
    }

    void div(){
        T result = num1 / num2;
        cout<<"\n division: "<<result;
    }
};

int main(){
    
    MathematicalOperation <int> op;

    op.input();
    op.add();
    op.sub();
    op.multi();
    op.div();
       
    return 0;
}