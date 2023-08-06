#include <bits/stdc++.h>
using namespace std;

class Dada {
public:
    void func() {
        cout << "Dada" << endl;
    }
};

class Baap1: virtual public Dada {
public:
    void func() {
        cout << "pehla baap" << endl;
    }
};

class Baap2: virtual public Dada {
public:
    void func() {
        cout << "dusra baap" << endl;
    }
};

class Baccha: public Baap1, public Baap2 {
public:
    void func() {
        cout << "baccha" << endl;
    }
};

class MyClass;
class MyClass2;

class MyClass2 {
private:
    int privateVar;

public:
    MyClass2(int value) : privateVar(value) {}

    // Declare the function as a friend of MyClass
    friend void friendFunction(const MyClass& obj1, const MyClass2& obj2);
};


class MyClass {
private:
    int privateVar;

public:
    MyClass(int value) : privateVar(value) {}
    // Declare the function as a friend of MyClass
    friend void friendFunction(const MyClass& obj1, const MyClass2& obj2);
};

void friendFunction(const MyClass& obj1, const MyClass2& obj2) {
    // Access the private member of MyClass
    std::cout << "Friend function accessing privateVar: " << obj1.privateVar << " " << obj2.privateVar << std::endl;
}

int main() {
    MyClass obj(42);
    MyClass2 obj2(43);

    friendFunction(obj, obj2); // Output: Friend function accessing privateVar: 42
    friendFunction(obj, obj2);
    return 0;
}


// int main() {
//     Baccha b;
//     b.func();
//     b.Baap1::func();
//     b.Baap2::func();
//     b.Baccha::func();
//     b.Dada::func();
// }