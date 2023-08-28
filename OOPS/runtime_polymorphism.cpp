#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Circle circle;
    Square square;

    Shape* shape1 = &circle;
    Shape* shape2 = &square;

    shape1->draw();  // Calls the draw() method of Circle
    shape2->draw();  // Calls the draw() method of Square

    return 0;
}
