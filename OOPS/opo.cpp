#include <bits/stdc++.h>
using namespace std;

class human{
    public:
    int val;
    human(){
        val = 2;
        cout<<val<<endl;
    }
};

class male : human{
    public:
    int val;
    male(){
        val = 5;
        cout<<val<<endl;
    }
};

int main(){
    male ram;
    cout<<ram.val<<endl;
    return 0;
}