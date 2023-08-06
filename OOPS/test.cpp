#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
    A(){
        a=8;
    }
    void f1(){
        cout<<"parent"<<endl;
    }
};

class B : public A{
    public:
    int a;
    B(int x){
        a=x;
    }
    void f1(){
        cout<<"child"<<endl;
    }
};

struct dog{
    int a;
    void print(){
        cout<<"chal gya"<<endl;
    }
};

struct dd: dog{
    private:
    int b;
    public:
    void print(){
        cout<<"chala gya child"<<endl;
    }
};

int main(){
    B obj(12);
    cout<<obj.A::a<<endl;
    obj.A::f1();
    obj.f1();

    // statically creation of object
    A obj1;
    // or
    A obj2 = A();

    // dynamically creation of object
    A* obj3 = new A();

    dog d;
    d.print();

    dd child;
    child.print();

    return 0;
}