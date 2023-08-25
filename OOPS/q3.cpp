#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef double db;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<string, ll> msl;
typedef map<char, ll> mcl;
typedef map<string, string> mss;

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pf push_front
#define pob pop_back
#define fi first
#define se second
#define in insert
#define rep(i, a, n) for (ll i = a; i < n; i++)
#define repr(i, n, b) for (ll i = n; i > b; i--)
#define repv(v) for (auto i : v)
#define all(v) v.begin(), v.end()
#define mem(a, b) memset(a, b, sizeof(a))
#define w(testcases) ll testcases;cin >> testcases;while (testcases--)
#define sz(v) ll(v.size())
#define set_bits(x) __builtin_popcountll(x)
#define lcm(a, b) ((a * b) / __gcd(a, b))
#define inf 1e18
#define nline "\n"
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>

#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" = "; _print(x); cerr << endl;
#define dbg2(x, y) cerr << #x << " = "; _print(x); cerr << ", " << #y << " = "; _print(y); cerr << endl;
#define dbg3(x, y, z) _print(x); cerr << " "; _print(y); cerr << " "; _print(z); cerr << endl;
#define dbg4(a, b, c, d) _print(a); cerr << " "; _print(b); cerr << " "; _print(c); cerr << " "; _print(d); cerr << endl;
#define dbg5(a, b, c, d, e) _print(a); cerr << " "; _print(b); cerr << " "; _print(c); cerr << " "; _print(d); cerr << " "; _print(e); cerr << endl;
#else
#define dbg(x)
#define dbg2(x, y)
#define dbg3(x, y, z)
#define dbg4(a, b, c, d)
#define dbg5(a, b, c, d, e)
#endif

void _print(int x) { cerr << x; }
void _print(ll x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(db x) { cerr << x; }
void _print(ld x) { cerr << x; }
void _print(ordered_set v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
 
template <class T, class V> void _print(pair <T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(unordered_map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }

const int N = 1e5 + 2;
const int mod = 1000000007;

ll power(ll a,ll b){
    if(b == 0){
        return 1;
    }
    ll ans = power(a,b/2);
    ans *= ans;
    ans %= mod;
    if(b % 2){
        ans *= a;
    }
    return ans % mod;
}

string res = "";
bool help(int i, vector<int> &a, int water, int fire){
    int n=a.size();
    if(water<0 or fire<0) return false;
    if(i==n) {
        // cout << res << endl;
        return true;
    }
    res.push_back('w');
    bool val1 = help(i+1, a, water-a[i], fire);
    res.pop_back();
    res.push_back('f');
    bool val2 = help(i+1, a, water, fire-a[i]);
    res.pop_back();
    return val1 or val2;
}

bool check(int time, int w, int f, vector<int> &a){
    int water=time*w, fire=time*f;
    // cout << "time: " << time << endl;
    bool res = help(0, a,water, fire);
    // cout << "res: " << res << endl;
    return res;
}

void solve(){
    int w,f;
    cin>>w>>f;
    int n;
    cin>>n;
    vector<int> monsters(n);
    for(int i=0;i<n;i++){
        cin>>monsters[i];
    }
    ll low=1, high=10;
    int ans=-1;
    while(low<=high){
        ll mid=(low+high)/2;
        if(check(mid, w, f, monsters)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans<<endl;
}

int main()
{
    FAST;
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}






| person_id | person_name | weight | turn | person_id | person_name | weight | turn | sum(t1.weight) |
| --------- | ----------- | ------ | ---- | --------- | ----------- | ------ | ---- | -------------- |
| 6         | John Cena   | 400    | 3    | 5         | Alice       | 250    | 1    | 2000           |
| 5         | Alice       | 250    | 1    | 4         | Bob         | 175    | 5    | 1000           |
| 4         | Bob         | 175    | 5    | 3         | Alex        | 350    | 2    | 525            |
| 2         | Marie       | 200    | 4    | 1         | Winston     | 500    | 6    | 200            |
| 3         | Alex        | 350    | 2    | 1         | Winston     | 500    | 6    | 700            |

| person_id | person_name | weight | turn | person_id | person_name | weight | turn | sum(t1.weight) |
| --------- | ----------- | ------ | ---- | --------- | ----------- | ------ | ---- | -------------- |
| 2         | Marie       | 200    | 4    | 5         | Alice       | 250    | 1    | 600            |
| 1         | Winston     | 500    | 6    | 5         | Alice       | 250    | 1    | 2500           |
| 6         | John Cena   | 400    | 3    | 5         | Alice       | 250    | 1    | 800            |
| 3         | Alex        | 350    | 2    | 5         | Alice       | 250    | 1    | 350            |
| 4         | Bob         | 175    | 5    | 5         | Alice       | 250    | 1    | 700            |

| person_id | person_name | weight | turn | person_id | person_name | weight | turn | sum(t1.weight) |
| --------- | ----------- | ------ | ---- | --------- | ----------- | ------ | ---- | -------------- |
| 2         | Marie       | 200    | 4    | 4         | Bob         | 175    | 5    | 400            |
| 6         | John Cena   | 400    | 3    | 4         | Bob         | 175    | 5    | 1200           |
| 3         | Alex        | 350    | 2    | 4         | Bob         | 175    | 5    | 1400           |
| 5         | Alice       | 250    | 1    | 4         | Bob         | 175    | 5    | 1250           |
| 4         | Bob         | 175    | 5    | 1         | Winston     | 500    | 6    | 175            |


| person_id | person_name | weight | turn | person_id | person_name | weight | turn | sum(t2.weight) |
| --------- | ----------- | ------ | ---- | --------- | ----------- | ------ | ---- | -------------- |
| 2         | Marie       | 200    | 4    | 4         | Bob         | 175    | 5    | 675            |
| 6         | John Cena   | 400    | 3    | 4         | Bob         | 175    | 5    | 875            |
| 3         | Alex        | 350    | 2    | 4         | Bob         | 175    | 5    | 1275           |
| 5         | Alice       | 250    | 1    | 4         | Bob         | 175    | 5    | 1625           |
| 4         | Bob         | 175    | 5    | 1         | Winston     | 500    | 6    | 500            |

| person_id | person_name | weight | turn | person_id | person_name | weight | turn | sum(t2.weight) |
| --------- | ----------- | ------ | ---- | --------- | ----------- | ------ | ---- | -------------- |
| 5         | Alice       | 250    | 1    | 5         | Alice       | 250    | 1    | 1875           |
| 2         | Marie       | 200    | 4    | 4         | Bob         | 175    | 5    | 875            |
| 6         | John Cena   | 400    | 3    | 4         | Bob         | 175    | 5    | 1275           |
| 3         | Alex        | 350    | 2    | 4         | Bob         | 175    | 5    | 1625           |
| 4         | Bob         | 175    | 5    | 4         | Bob         | 175    | 5    | 675            |
| 1         | Winston     | 500    | 6    | 1         | Winston     | 500    | 6    | 500            |

| person_id | person_name | weight | turn | person_id | person_name | weight | turn | sum(t2.weight) |
| --------- | ----------- | ------ | ---- | --------- | ----------- | ------ | ---- | -------------- |
| 2         | Marie       | 200    | 4    | 5         | Alice       | 250    | 1    | 1200           |
| 1         | Winston     | 500    | 6    | 5         | Alice       | 250    | 1    | 1875           |
| 6         | John Cena   | 400    | 3    | 5         | Alice       | 250    | 1    | 1000           |
| 3         | Alex        | 350    | 2    | 5         | Alice       | 250    | 1    | 600            |
| 4         | Bob         | 175    | 5    | 5         | Alice       | 250    | 1    | 1375           |
| 5         | Alice       | 250    | 1    | 5         | Alice       | 250    | 1    | 250            |