// 23 / 03 / 26

#include<iostream>
using namespace std;

// abstract class - class which contains minimum one pure virtual function
class Shape{
    private:
    int side;

    public:
    Shape(){
        side = 10;
    }

    // pure virtual function
    virtual void calculateArea()=0;
    virtual void calculatePerimeter()=0;
    virtual void draw()=0;
};


class Rectangle : public Shape{
    private:
    int length;
    int breadth;

    public:
    Rectangle(){
        this->length = 10;
        this->breadth = 6;
    }

    Rectangle(int len, int br){
        this->length = len;
        this->breadth = br;
    }

    void calculateArea(){
        cout<<"Area of rectangle is : "<<length * breadth<<endl;
    }

    void calculatePerimeter(){
        cout<<"Perimeter of rectangle is : "<<2 *(length+breadth)<<endl;
    }

    void draw(){
        cout<<"Draw method of rectangle class called"<<endl;
    }
};

int main(){

    Shape *s = new Rectangle(12,8);
    s->draw();
    s->calculatePerimeter();
    s->calculateArea();
    return 0;
}