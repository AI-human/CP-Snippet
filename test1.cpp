// Lets Roll
// v2
// #ifdef ONLINE_JUDGE
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
// #endif
#include <bits/stdc++.h>

// Program showing a policy-based data structure.
// #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template<class T>  tree<T,null_type, less<T>, rb_tree_tag,
//                             tree_order_statistics_node_update> oset;

using namespace std;
#define boost (ios_base::sync_with_stdio(false), cin.tie(nullptr))

using str = string;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vs = vector<string>;
using vvi = vector<vi>;
using vp = vector<pair<int, int>>;
using vpl = vector<pair<ll, ll>>;
using ull = unsigned long long;

#define ff first
#define ss second
#define pb push_back
#define MP make_pair
#define inf 0x3f3f3f3f

#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define findc(cn, abc) ((cn).find(abc) != (cn).end())

#define low(s) (transform(s.begin(), s.end(), s.begin(), ::tolower))
#define Ceil(x, y) ((x + y - 1) / y)
#define fr(n) for (ll i = 0; i < n; i++)
#define frj(n) for (ll j = 0; j < n; j++)
#define frr(i, a, b) for (ll i = (a); i <= (b); i++)
#define rfrr(i, a, b) for (ll i = (b); i <= (a); i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define Mod(a, b) (((a % b) + b) % b)
#define sz(s) ((int)s.size())
#define endl '\n'
#define maxE(a) *max_element(all(a))
#define minE(a) *min_element(all(a))
const double Pi = acos(-1);
#define torad(x) ((x) * (Pi / 180.0))

double todeg(double x)
{
    if (x < 0)
    {
        (x += 2 * Pi);
    }
    return ((x * 180) / Pi);
}
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b))
double fixangle(double A)
{
    return (A > 1) ? 1 : (A < -1) ? 1
                                  : A;
} // let angle var capital A, asin(1,-1),acos...
bool comp(double a, double b)
{
    return abs(a - b) < 1e-12;
}


void adjmatrix(){
    int n,m;cin>>n>>m;  // n = how many vertices, m = how many edges
    vector<vector<int>> a(n+5, vector<int> (n+5,0));
    for(int i=1;i<=(m);i++){
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}
void adjlist(){
    int n,m;cin>>n>>m;
    vector<int> edge[n+5];
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        cout<<i<<'-';
        for(int j=0;j<sz(edge[i]);j++){
            cout<<edge[i][j]<<' ';
        }
        cout<<endl;
    }

}


void solve()
{
    // adjlist();
    int n;cin>>n;
    vector<vector<int>> b(n,vector<int>(n,0));// 2d vector longcut

    vi a[n+1]; //2D vector shortcut and its input and traverse;
    for(int i=0;i<n;i++){   
        for(int j=0;j<n;j++){
            int x;cin>>x;
            a[i].pb(x);
        }
    }
    for(int i=0;i<n;i++){   
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }

}

int main()
{
    boost;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}