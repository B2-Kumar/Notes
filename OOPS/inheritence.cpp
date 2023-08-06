#include <bits/stdc++.h>
using namespace std;

class human{
    public:
    int age;
    human(){
        cout<<"human constructor called"<<endl;
    }
};

class male: public human{
    public:
    string col;
    male(){
        cout<<"male constructor called"<<endl;
    }
};

class D{
    public:
    void func(){
        cout<<"D called"<<endl;
    }
};

class A : public D{
    public:
    void func(){
        cout<<"A called"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"B called"<<endl;
    }
};

class C: public A, public B{
    public:
    void func(){
        cout<<"C called"<<endl;
    }
};

int main(){
    C obj;
    obj.func();
    obj.A::func();
    obj.B::func();
    obj.A::D::func();
    return 0;
}