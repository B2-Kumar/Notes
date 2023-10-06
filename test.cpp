// pick up

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector <ll> dijkstra(ll n, vector<vector<ll>> adj[], ll src) {
    vector<ll> dist(n, 1e18);
    dist[src] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<>> pq;
    pq.push({0, src});
    
    while(pq.empty() == false) {
        pair<ll, ll> temp = pq.top(); pq.pop();
        ll parentDist = temp.first;
        ll node = temp.second;
        
        for(auto child: adj[node]) {
            ll childNode = child[0], betweenDist = child[1];
            
            ll newDist = parentDist + betweenDist;
            
            if(newDist < dist[childNode]) {
                dist[childNode] = newDist;
                pq.push({newDist, childNode});
            }
        } 
    }
    return dist;
}


int main() {
    ll n, m;
    cin>>n>>m;
    vector<vector<ll>> adj[n];
    for(ll i = 0;i < m;i++){
        ll u, v, wt;
        cin>>u>>v>>wt;
        u--;v--;
        adj[u].push_back({v, wt});
    }
    vector<ll> dist = dijkstra(n, adj, 0);
    for(auto ele: dist){
        if(ele == 1e18){
            cout<<-1<<" ";
        }
        else {
            cout<<ele<<" ";
        }
    }
    cout<<endl;
    return 0;
}