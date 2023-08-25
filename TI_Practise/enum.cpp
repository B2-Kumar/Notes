#include <bits/stdc++.h>
using namespace std;

struct result {
    result(): arr(){};
    int arr[100];
};

struct result func(){
    result obj;
    obj.arr[0] = 29;
    return obj;
}

struct person {
    person(){
        cout<<"person"<<endl;
    }
    virtual int vis() = 0;
};

struct man : public person {
    man(){
        cout<<"man"<<endl;
    }
};

struct node {
    int val;
    node* next;
};

int main(){
    // man danish;
    // char *ch = new char[10];
    // cout<<sizeof(ch)<<endl;
    node* obj;
    obj->val = 45;
    obj->next = NULL;
    node* obj1;
    obj1->val = 23;
    obj1->next = NULL;
    obj->next = obj1;
    node* temp = obj;
    while(temp){
        cout<<temp->val<<endl;
        temp = temp->next;
    }
    return 0;
}