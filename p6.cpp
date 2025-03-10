//2.	Create an abstract class Animal with an abstract method sound(). Then, implement subclasses Dog and Cat that provide specific sounds.
#include<iostream>
using namespace std;
class Animal{
public:
virtual string sound()=0;

};
class Dog:public Animal{
    public:
    string sound() override{
        return "Woooof Woof";
    }
};
class Cat:public Animal{
    public:
    string sound() override{
        return "Meow Meow";
    }
};
int main(){
Dog bruno;
Cat bilauta;

cout<<"Bruno sounds:"<<bruno.sound()<<endl;
cout<<"Bilauta sounds:"<<bilauta.sound()<<endl;
}