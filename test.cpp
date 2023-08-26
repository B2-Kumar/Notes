#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<vector<int>> points;
    for(int i = 0;i < k;i++){
        int x, y;
        cin>>x>>y;
        points.push_back({x, y});
    }
    int radius, time;
    cin>>radius>>time;
    radius *= time;
    int cnt = 0;
    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= m;j++){
            bool flag = true;
            for(auto it: points){
                int x = it[0], y = it[1];
                double diff = sqrt((x - i)*(x - i) + (y - j)*(y -j));
                int res = ceil(diff);
                if(res <= radius)flag = false;
            }
            if(flag)cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}