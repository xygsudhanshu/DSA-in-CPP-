#include<iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;   // 👈 No body = pure virtual

    void sayHi() {
        cout << "Hello from Shape!" << endl;
    }
};

// ❗ Shape is now an abstract class – can't create object of it

class Circle : public Shape {
public:
    void draw()  {
        cout << "Drawing Circle 🔵" << endl;
    }
};

int main() {
    // Shape s;           ❌ Not allowed: abstract class
    Shape* s = new Circle();   // ✅ Base pointer, derived object
    s->draw();                 // 🔥 Drawing Circle
    s->sayHi();                // ✅ Hello from Shape!

    delete s;
    return 0;
}
