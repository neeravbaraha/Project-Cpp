// pass by reference;

#include <iostream>
using namespace std;
void intNum(int x)
{
    x = 20;
}
int main()
{
    int a = 30;
    intNum(a);
    cout << a << endl;
}