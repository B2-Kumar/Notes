#include <bits/stdc++.h>
using namespace std;

int solve(string &s){
    int n = s.size();
    int small = 0, large = 0, equal = 0;
    for(int i = 0;i < n/2;i++){
        if(s[i] == s[n - 1 - i]){
            equal++;
        }
        else if(s[i] > s[n - 1 - i]){
            large++;
        }
        else {
            small++;
        }
    }
    int m = n/2;
    int mn = min({m - small, m - equal, m - large});
    return mn;
}

int main()
{
    string s;
    cin>>s;
    int result = solve(s);
    cout << result << endl;
    return 0;
}