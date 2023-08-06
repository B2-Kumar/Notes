#include <iostream>

class Parent {
public:
    virtual void display() {
        std::cout << "Parent class" << std::endl;
    }
};

class Child : public Parent {
public:
    void display() {
        std::cout << "Child class" << std::endl;
    }
};

int main() {
    Parent* parent; // Declare a pointer of base class type
    parent = new Child(); // Dynamically allocate a Child object and assign its address to parent
    parent->display(); // Output: Child class

    Parent p = Child();
    p.display();

    delete parent; // Don't forget to deallocate the memory

    return 0;
}
