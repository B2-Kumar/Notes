#include <bits/stdc++.h>
using namespace std;

class person {
    public:
    int a;
    void say(){
        cout<<"Hiii"<<endl;
    }
    void say(string name){
        cout<<"Hiii "<<name<<endl;
    }
    void add(int x, int y, int z = 10){
        cout<<x + y + z<<endl;
    }
    void operator+ (person &obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout<<"Output: "<<val2 - val1<<endl;
    }
};

class male: public person {
    public:
    void say(){
        cout<<"change ho gya"<<endl;
    }
};

int main(){
    person obj;
    obj.say();
    obj.say("john");
    obj.add(10, 20);
    obj.add(10, 20, 30);
    male m;
    m.say();
    m.person::say();

    // operator overloading
    person p1, p2;
    p1.a = 5;
    p2.a = 3;
    p1 + p2;
    return 0;
}