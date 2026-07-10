#include<iostream>
using namespace std;

int main() {
    try {
        int a;
        cout << "Enter a number: ";
        cin >> a;
        if (a == 0)
            throw "Division by zero not allowed!";

        cout << 10 / a << endl;
    }
    catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }

    return 0;
}
