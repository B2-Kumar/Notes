#include <bits/stdc++.h>
using namespace std;

class MyClass {
public:
    static int count; // Static member variable
    MyClass() {
        count++;
    }
};

// int MyClass::count = 0; // Initialize the static member variable outside the class

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    std::cout << "Count: " << MyClass::count << std::endl; // Output: Count: 3

    return 0;
}
