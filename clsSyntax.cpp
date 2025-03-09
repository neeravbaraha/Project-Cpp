#include<iostream>
using namespace std;
class studentInfo{
    public: //publicly accessible;
string name;// declared
int cls;
string depart;

void displayStudentInfo(){
    cout<<"Name: "<<name<<"Class: "<<cls<<"Department: "<<depart<<endl;
}
};

int main(){
studentInfo student1;// student1 is declared here
student1.name="Nirab";
student1.cls=3;
student1.depart="ComputerApplication";
student1.displayStudentInfo(); // displayinformantion
}