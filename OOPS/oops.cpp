#include <bits/stdc++.h>
using namespace std;

// #pragma pack(1)

class Employee{
    public:
    int a;
    int b;
    char ch;
    Employee(){
        cout<<"Employee"<<endl;
        cout << this << endl;
    }
    // private:
    Employee(int a){
        b = a;
        cout<<"Employee2 "<<endl;
        cout << this << endl;
    }
};

class ram : public Employee{
    public:
    int rami;

    ram() : Employee(1) {
        cout << "called" << endl;
        rami=90;
    }

    ram(int n) : Employee() { 
        cout << "called2" << endl;
        // Employee(19);
        rami=n;
    }

    // ram(ram& r) {
    //     cout << "copy" << endl;
    //     rami = r.rami;
    // }
};


class person{
    public: 
    int a;
    const int c;
    static int time;
    person(): c(2020){

    }
    void print(int val){
        cout<<val<<endl;
    }
};

int person::time = 10;

int main(){

    cout<<person::time<<endl;
    person p = person();
    cout<<p.c<<endl;
    p.print(10);

    // person p1;
    // p1.a = 5;
    // person p2 = p1;
    // p2.a = 10;
    // cout<<p1.a<<" "<<p2.a<<endl;

    // ram a("ramu");
    // cout << a.rami << endl;
    // cout << a.a << endl;
    // cout << a.b << endl;

    // ram r1(1);
    // // ram r2=r1; 
    // ram r2 = r1;
    // ram r3(r1);

    // r2.rami = 5;
    // cout << r1.rami << endl;

    // cout << &r1 << " " << &r2 << " " << &r3 << endl;
     //  r2=r1;
    return 0;
}