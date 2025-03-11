//INHERITANCE
//2.	Create a Person class with attributes name and age. Then, create a Student class that extends Person and adds an additional attribute rollNumber.
#include<iostream>
using namespace std;
//person class created let make it parent class
class Person{
public:
    string name;
    int age;

    //constructor
    Person(string n,int a){
        name=n;
        age=a;
    }

    void displayInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
// childClass created 
class Student:public Person{
public:
int rollNo;

//constructor for Student is created that inherited the person class
Student(string n,int a, int r):Person(n,a){
    rollNo=r;
}
void displayStudentInfo(){
    displayInfo();
    cout<<"Roll No:"<<rollNo<<endl;
}
};
int main(){
Student mystd("Nirab",14,201412214);
mystd.displayStudentInfo();

}