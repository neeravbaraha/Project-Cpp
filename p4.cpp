//2.	Create a Student class with private attributes for name and roll number. Implement setter and getter methods for these attributes.

#include<iostream>
using namespace std;
//blue print created
class StudentInfo{
private:
string name;
int rollNo;
public:
//calling constructor
StudentInfo(string n,int rn){
    name=n;
    rollNo=rn;
}
//that is returning name
string getName(){
return name;
}
//this is returning rollNo
int getRollno(){
    return rollNo;
}
};
int main(){
    //object created
StudentInfo student("Nirab",1902);
cout<<"Name: "<<student.getName()<<endl;
cout<<"Roll No:"<<student.getRollno()<<endl;

}