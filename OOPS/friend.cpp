#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
    int length;
    public:
    Rectangle(){
        length = 10;
    }
    friend int printLength(Rectangle); // friend function
};

int printLength(Rectangle obj){
    obj.length += 10;
    return obj.length;
}

int main(){
    Rectangle obj;
    cout<<"Length of Rectangle: "<<printLength(obj)<<endl;
    return 0;
}