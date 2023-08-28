#include <bits/stdc++.h>

class MyClass {
private:
    int x;
    double y;

public:
    // Constructor using initialization list
    // MyClass(int a, double b) : x(a), y(b) {
    //     // Constructor body (optional)
    // }

    void printValues() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }

    int print(int a){
        std::cout<<a<<std::endl;
        return a;
    }
    int print(std::string s){
        std::cout<<s<<std::endl;
        return -1;
    }
};

int main() {
    MyClass obj;
    obj.print("name");
    obj.print(23);
    return 0;
}