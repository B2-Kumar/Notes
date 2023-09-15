// #include <bits/stdc++.h>
// using namespace std;

// class Singlton{
//     private:
//     static Singlton *instance;
//     Singlton(){
//         cout<<"constructor called"<<endl;
//     }
//     public: 
//     static Singlton* getInstance(){
//         if(instance == NULL){
//             return instance = new Singlton();
//         }
//         return instance;
//     }
// };

// class Parent{
//     public:
//     int val = 12;
// };

// class Child : public Parent{
//     public:
//     string val = "dusra";
// };

// class Vector {
// public:
//     int x, y;
//     Vector operator+(const Vector& other) const {
//         return {x + other.x, y + other.y};
//     }
// };

// Vector v1 = {1, 2};
// Vector v2 = {3, 4};
// Vector result = v1 + v2; // Now, + operator adds two vectors element-wise.


// int main(){
//     Child obj;
//     cout<<obj.val<<endl;
//     cout<<obj.Parent::val<<endl;
//     cout<<result.x<<endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// vector<int> find_lps(string &s){
//     int n = s.size();
//     vector<int> lps(n, 0);
//     int i = 1, j = 0;
//     while(i < s.size()){
//         if(s[i] == s[j]){
//             lps[i] = j + 1;
//             i++;
//             j++;
//         }
//         else {
//             if(j != 0){
//                 j = lps[j - 1];
//             }
//             else {
//                 i++;
//             }
//         }
//     }
//     return lps;
// }

// vector<int> kmp(string& pat, string& s){
//     vector<int> lps = find_lps(pat);
//     int i = 0, j = 0;
//     vector<int> index;
//     while(i < s.size()){
//         if(s[i] == pat[j]){
//             i++;
//             j++;
//         }
//         else {
//             if(j != 0){
//                 j = lps[j - 1];
//             }
//             else {
//                 i++;
//             }
//         }
//         if(j == pat.size()){
//             j = lps[j - 1];
//             index.push_back(i - pat.size());
//         }
//     }
//     return index;
// }

// void solve(string &s, string &t){
//     s += s;
//     vector<int> res = kmp(t, s);
//     for(auto it: res){
//         cout<<it<<" "<<endl;
//     }
// }

#include <stdio.h>

struct parent{
    int x;
    char ch;
};

int main(){
    // string s, t;
    // cin>>s>>t;
    // solve(s, t);

    struct parent obj;
    printf("%d", sizeof(obj));
    return 0;
}