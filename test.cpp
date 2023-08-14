#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>> &adj, vector<bool> &vis){
    vis[u] = true;
    for(auto v: adj[u]){
        if(vis[v])continue;
        dfs(v, adj, vis);
    }
}

int solve(vector<vector<string>> &arr){
    int n = 0;
    for(auto i: arr){
        string s1 = i[0];
        string s2 = i[1];
        int val1 = s1.back() - '0';
        int val2 = s2.back() - '0';
        n = max({n, val1, val2});
    }
    vector<vector<int>> adj(n);
    for(auto i: arr){
        string s1 = i[0];
        string s2 = i[1];
        int val1 = s1.back() - '0';
        int val2 = s2.back() - '0';
        --val1;--val2;
        adj[val1].push_back(val2);
        adj[val2].push_back(val1);
    }
    vector<bool> vis(n, false);
    int no_of_components = 0;
    for(int i = 0;i < n;i++){
        if(vis[i] == false){
            no_of_components++;
            dfs(i, adj, vis);
        }
    }
    if(no_of_components == 1)return 0;
    return no_of_components;
}

int main(){
    vector<vector<string>> arr;
    int m;
    cin>>m;
    for(int i = 0;i < m;i++){
        string s1, s2;
        cin>>s1>>s2;
        arr.push_back({s1, s2});
    }
    cout<<solve(arr)<<endl;
    return 0;
}