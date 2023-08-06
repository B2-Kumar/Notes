#include <iostream>

class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks." << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        std::cout << "Cat speaks." << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Dog speaks." << std::endl;
    }
};

class CatDog : public Cat, public Dog {
public:
    void speak() override {
        Cat::speak(); // Call the speak() function from Cat
        // or Dog::speak(); // Call the speak() function from Dog
    }
};

int main() {
    CatDog cd;
    cd.speak(); // Output: Cat speaks.
    return 0;
}
