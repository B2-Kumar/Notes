#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> &a, vector<int> &b){
    vector<int> indegree(n);
    vector<vector<int>> adj(n);
    for(int i = 0;i < a.size();i++){
        int u = a[i], v = b[i];
        adj[u].push_back(v);
        adj[v].push_back(u);
        indegree[u]++;
        indegree[v]++;
    }
    queue<int> q;
    for(int i = 0;i < n;i++){
        if(indegree[i] == 0 || indegree[i] == 1){
            q.push(i);
        }
    }
    int ans = 0;
    while(!q.empty()){
        int sz = q.size();
        ans++;
        while(sz--){
            auto node = q.front();
            q.pop();
            for(auto it: adj[node]){
                if(indegree[it] == 2){
                    indegree[it]--;
                    q.push(it);
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> a(m), b(m);
    for(auto &it: a)cin>>it;
    for(auto &it: b)cin>>it;
    solve(n, a, b);
    return 0;
}