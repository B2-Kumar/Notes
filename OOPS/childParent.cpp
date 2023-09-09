#include <bits/stdc++.h>
using namespace std;

class grandParent{
    public:
    grandParent(){
        cout<<"grandParent called"<<endl;
    }
    ~grandParent(){
        cout<<"grandParent destructor called"<<endl;
    }
};

class parent {
    public:
    parent(){
        cout<<"parent called"<<endl;
    }
    ~parent(){
        cout<<"parent destructor called"<<endl;
    }
};

class child: public grandParent, public parent {
    public:
    child(){
        cout<<"child called"<<endl;
    }
    ~child(){
        cout<<"child destructor called"<<endl;
    }
};

int main(){
    child obj;
    return 0;
}