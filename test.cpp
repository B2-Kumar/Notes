#include <bits/stdc++.h>
using namespace std;

class Singlton{
    private:
    static Singlton *instance;
    Singlton(){
        cout<<"constructor called"<<endl;
    }
    public: 
    static Singlton* getInstance(){
        if(instance == NULL){
            return instance = new Singlton();
        }
        return instance;
    }
};

class Parent{
    public:
    int val = 12;
};

class Child : public Parent{
    public:
    string val = "dusra";
};

class Vector {
public:
    int x, y;
    Vector operator+(const Vector& other) const {
        return {x + other.x, y + other.y};
    }
};

Vector v1 = {1, 2};
Vector v2 = {3, 4};
Vector result = v1 + v2; // Now, + operator adds two vectors element-wise.


int main(){
    Child obj;
    cout<<obj.val<<endl;
    cout<<obj.Parent::val<<endl;
    cout<<result.x<<endl;
    return 0;
}