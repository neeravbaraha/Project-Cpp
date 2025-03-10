//Create an abstract class Vehicle with a pure virtual function start(). Then, create two concrete subclasses Car and Bike that implement the start() method with their specific messages.

#include<iostream>
using namespace std;
class Vehicle{
public:
virtual string start()=0;
};
class Car:public Vehicle{
public:
string start() override{
    return "Car is started";
}
};
class Bike:public Vehicle{
    public:
    string start() override{
        return "Broooooooom! Brooooooooom!";
    }
};
int main(){
Car toyata;
Bike BMW;

cout<<"Car: "<<toyata.start()<<endl;
cout<<"Bike: "<<BMW.start()<<endl;

}