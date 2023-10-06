#include <iostream>
using namespace std;

class Parent {
public:
    virtual void display() {
        std::cout << "Parent class" << std::endl;
    }

    // virtual void func() = 0;
};

class Child : public Parent {
public:
    void display() {
        std::cout << "Child class" << std::endl;
    }

    void func(){
        cout<<"abstact hat gaya";
    }
};

int main() {
    Parent* parent; // Declare a pointer of base class type
    parent = new Child(); // Dynamically allocate a Child object and assign its address to parent
    parent->display(); // Output: Child class

    Parent p = Child();
    p.display();

    delete parent; // Don't forget to deallocate the memory

    // Child ch;
    // ch.func();

    return 0;
}
