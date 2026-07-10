#include<iostream>
using namespace std;
// ✅ Yeh ek CLASS TEMPLATE hai
template <typename T>
class MyClass {
public:
    T data;
    MyClass(T val) {
        data = val;
    }
    void show() {
        cout << "Data: " << data << endl;
    }
};

// ✅ Yeh TEMPLATE CLASS ka use hai (i.e., object bana rahe hain with specific type)
int main() {
    MyClass<int> obj1(10);      // template class with int
    MyClass<string> obj2("Radhe");  // template class with string

    obj1.show();   // Output: Data: 10
    obj2.show();   // Output: Data: Radhe
    return 0;
}
