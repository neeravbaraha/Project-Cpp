//Create a class Student with attributes name, age, and grade. Implement a method to display student details.

#include<iostream>
using namespace std;
class studentInfo{
public:
string name;
int age;
int grade;

void display(){
    cout<<"Name:"<<name<<endl;
    cout<<"Age"<<age<<endl;
    cout<<"Grade"<<grade<<endl;
}

};
int main(){
studentInfo s1;
s1.name="Nirab";
s1.age=21;
s1.grade=9.32;
s1.display();

studentInfo s2;
s2.name="Hero";
s2.age=20;
s2.grade=8.32;
s2.display();


}