/*                                                                  
                                                                Lets Roll 
*/


#ifdef ONLINE_JUDGE
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("uny-loops")
#endif
#include <bits/stdc++.h>


// pbds
//  #include <ext/pb_ds/assoc_container.hpp>
//  using namespace __gnu_pbds;
//  template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

using namespace std;

#define boost (ios_base::sync_with_stdio(false), cin.tie(nullptr))

// -------------------------------------debugger-------------------

#ifndef ONLINE_JUDGE
#include <C:\Users\rocka\OneDrive\Documents\CP-Snippet\debug.h>
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif
//-----------------------------------------------------------------

using str = string;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vs = vector<string>;
using vvi = vector<vi>;
using vpi = vector<pair<int, int>>;
using vpl = vector<pair<ll, ll>>;
using ull = unsigned long long;

#define ff first
#define ss second
#define pb push_back
#define MP make_pair
#define inf 0x3f3f3f3f

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min({a, b, c, d});
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define findc(cn, abc) ((cn).find(abc) != (cn).end())
#define meme(arr, b) memset(arr, b, sizeof(arr)) // 0,-1
const int MOD = 1e9 + 7;

#define low(s) (transform(s.begin(), s.end(), s.begin(), ::tolower))
#define Ceil(x, y) ((x + y - 1) / y)
#define fr(n) for (ll i = 0; i < n; i++)
#define frj(n) for (ll j = 0; j < n; j++)
#define frr(i, a, b) for (ll i = (a); i <= (b); i++)
#define rfrr(i, a, b) for (ll i = (b); i <= (a); i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(s) ((int)s.size())
#define endl '\n'
#define maxE(a) *max_element(all(a))
#define minE(a) *min_element(all(a))
const double Pi = acos(-1);
#define deg_to_rad(x) ((x) * ((2 * acos(0)) / 180.0))
#define rad_to_deg(x) ((x) * (180.0 / (2 * acos(0))))
#define print(x) cout << (x) << endl;
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b))
#define prec(x) fixed << setprecision(x)
#define eps 1e-15
#define uniq(a) (a).erase(unique(all(a)), (a).end())
#define upperB(a,x) upper_bound(all(a),x) - a.begin()
#define lowerB(a,x) lower_bound(all(a),x) - a.begin()

//_____________________________ bitwise_________________
#define count_bin_1(x) __builtin_popcount(x)
#define check_parity(x) __builtin_parity(x) // returns true(1) if the binary number of 1 has odd parity else it returns false(0) for even parity.
#define leading_zero(x) __builtin_clz(x)
#define trailing_zero(x) __builtin_ctz(x)
//________________________________

// _____________________________Modular_________________

#define Mod(a, b) (((a % b) + b) % b)
//______________________________________________________
double fixangle(double A)
{
    return (A > 1) ? 1 : (A < -1) ? 1
                                  : A;
} // let angle var capital A, asin(1,-1),acos...
bool comp(double a, double b)
{
    return abs(a - b) <= eps;
}
ll dis(ll x1, ll y1, ll x2, ll y2)
{
    return (abs(x1 - x2) + abs(y1 - y2));
}

// direction array
// const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1}; 

bool check(int x, int y, int n, int m) { return (x >= 0 && y >= 0 && x < n && y < m); }
// ll n,m;

bool is_integer(double value)
{
    double intpart;
    return modf(value, &intpart) == 0.0;
}

ll n,k;
bool ok(ll m){
    return 0;
}



void solve()
{   

}


int main()
{

    // auto start =chrono::high_resolution_clock::now();
    // boost;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    // double time_taken =
    // chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - start).count();

    // cout<<time_taken<<" ms";
}