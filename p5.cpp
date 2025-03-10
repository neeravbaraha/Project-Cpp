//1.	Create an abstract class Shape with an abstract method area(). Then, create concrete subclasses Circle and Rectangle.

#include<iostream>
#include<cmath>
#include <corecrt_math_defines.h>

using namespace std;
class Shape{
    public:
    virtual double area()=0;
};
class Circle:public Shape{
   private:
   double radius;
   public:
   Circle(double r):radius(r){}
   double area() override{
    return M_PI*radius*radius;
   }
};

class Rectangle:public Shape{
    private:
    double length,width;
    public:
    Rectangle(double l,double w):length(l),width(w){}
    double area() override{
        return length*width;
    }
};

int main(){
Circle circle(5);
cout<<"Area of Circle: "<<circle.area()<<endl;

Rectangle rectangle(3,4);
cout<<"Area of Rectangle: "<<rectangle.area()<<endl;
}