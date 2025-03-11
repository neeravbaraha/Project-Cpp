//INHERITANCE
//1.	Create a Vehicle class with methods start() and stop(). Then, create a Car class that extends Vehicle and adds an additional method honk().
#include<iostream>
using namespace std;
class Vehicle{
    public:
    void start(){
        cout<<"Vehicle Started"<<endl;
    }

    void stop(){
        cout<<"Vehicle Stopped"<<endl;
    }
};
class Car:public Vehicle{
    public:
    void honk(){
        cout<<"Vehicle Horned"<<endl;
    }
};
int main(){
Car myCar;
myCar.start();
myCar.honk();
myCar.stop();
}