#include <iostream>

class Singleton {
private:
    static Singleton* instance; // Static member to hold the single instance

    // Private constructor to prevent direct instantiation
    Singleton() {
        std::cout << "Singleton instance created." << std::endl;
    }

public:
    // Static method to get the single instance
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void showMessage() {
        std::cout << "Hello from Singleton!" << std::endl;
    }
};

// Initialize the static member variable to nullptr
Singleton* Singleton::instance = nullptr;

int main() {
    // Get the singleton instance using getInstance()
    Singleton* s1 = Singleton::getInstance();
    s1->showMessage(); // Output: Hello from Singleton!

    // Since it is a singleton, both pointers point to the same instance
    Singleton* s2 = Singleton::getInstance();
    s2->showMessage(); // Output: Hello from Singleton!

    // Both pointers have the same memory address
    std::cout << "Address of s1: " << s1 << std::endl;
    std::cout << "Address of s2: " << s2 << std::endl;

    return 0;
}
