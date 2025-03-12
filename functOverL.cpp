//Example of function overloading 

#include<iostream>
using namespace std;

void integer(int i){
    cout<<"Integer: "<<i<<endl;
}

void str(string s){
    cout<<"String: "<<s<<endl;
}

void doubleNum(double d){
    cout<<"Double: "<<d<<endl;
}
int main(){
integer(3);
str("String");
doubleNum(3.145);
return 0;

}