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
#define fixed(n) cout << fixed << setprecision(n);

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


ll fib(int n){
    if(n==1)
        return 0;
    else if( n==2)
        return 1;
    return fib(n-1)+fib(n-2);
}

void solve(){
    int n;cin>>n;
    

    
}




int main()
{
    boost;
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}