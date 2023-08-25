#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int val){
        this->val = val;
    }
};

void print_func(Node* head){
    Node* node = head;
    while(node){
        cout<<node->val<<" ";
        node = node->next;
    }
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    print_func(head);
    return 0;
}