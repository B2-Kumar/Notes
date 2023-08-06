#include <bits/stdc++.h>
using namespace std;

class singleton {
private:
    // Private constructor to prevent external instantiation
    static singleton* instance;
    int a;
    singleton(int z) { a = z; instance = NULL;}

public:
    // Static method to get the single instance of the class
    static singleton* getInstance() {
        if(instance == NULL)instance = new singleton(10);
        return instance;
    }

    // Add any other member functions or variables as needed
};

int main() {
    // To access the singleton instance, use the getInstance() method
    singleton* obj = singleton::getInstance();
    singleton* obj2 = singleton::getInstance();
    cout<<obj<<endl;
    cout<<obj2<<endl;
    return 0;
}
