#include <bits/stdc++.h>
using namespace std;

class MyClass
{
    const int a = 10;
public:
    void regularFunction()
    {
        cout<<a<<endl;
        // Can modify data members of the class here
    }

    void constFunction() const
    {
        // Cannot modify data members of the class here
    }
};

int main()
{
    MyClass ob;
    // both const and not const function can be called.
    ob.constFunction();
    ob.regularFunction();
    const MyClass obj;
    obj.regularFunction(); // Error: Cannot call a non-const member function on a const object
    obj.constFunction();   // Okay: Can call a const member function on a const object
}