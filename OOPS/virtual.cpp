#include <iostream>

class Shape {
public:
    // Virtual function for calculating the area (can be overridden in derived classes)
    virtual double getArea() {
        return 0.0; // Base class provides a default implementation
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the getArea() function to provide Circle-specific implementation
    double getArea() {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the getArea() function to provide Rectangle-specific implementation
    double getArea() {
        return length * width;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 3.0);
    Shape shape3 = Rectangle(5, 3);

    std::cout<<shape3.getArea()<<std::endl;

    // Polymorphic behavior: getArea() depends on the actual object type
    std::cout << "Area of Circle: " << shape1->getArea() << std::endl;       // Output: Area of Circle: 78.5
    std::cout << "Area of Rectangle: " << shape2->getArea() << std::endl;    // Output: Area of Rectangle: 12

    delete shape1;
    delete shape2;

    return 0;
}
