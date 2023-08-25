#include <bits/stdc++.h>
using namespace std;

int main(){
    int *ptr = (int *)(malloc(5 * sizeof(int)));
    for(int i = 0;i < 5;i++){
        cout<<*(ptr + i)<<endl;
    }
    ptr = (int *)(realloc(ptr, 10*sizeof(int)));
    int *p = (int *)(calloc (12, sizeof(int)));
    for(int i = 0;i < 12;i++){
        cout<<*(p + i)<<endl;
    }
    return 0;
}