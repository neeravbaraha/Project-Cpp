#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {  // Virtual function for polymorphism
        cout << "Drawing Shape" << endl;
    }
    virtual ~Shape() {}  // Virtual destructor for proper cleanup
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    shape1->draw();  // Calls Circle's draw()

    Shape* shape2 = new Square();
    shape2->draw();  // Calls Square's draw()

    delete shape1;  // Proper cleanup due to virtual destructor
    delete shape2;

    return 0;
}
