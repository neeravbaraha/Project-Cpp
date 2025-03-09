//using constructor;

#include<iostream>
using namespace std;
//class is created
class car{
public:
string name;
int year;
// constructor is called
car(string n,int y){
    name=n;
    year=y;
}

//function to call

void display(){
    cout<<"Name: "<<name<<"Year: "<<year<<endl;
}
};
int main(){
car car1("BMW",2022);
car1.display();
}