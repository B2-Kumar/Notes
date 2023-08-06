#include <bits/stdc++.h>
using namespace std;

class person{
    string name;
    int age;
    public:
    person(string name, int age){
        this->name = name;
        this->age = age;
        cout<<"Name: "<<name<<" Age: "<<age<<endl;
    }
};

int main(){
    person obj("Ram", 24);
    return 0;
}