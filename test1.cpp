// Lets Roll
// v1
#ifdef ONLINE_JUDGE
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#endif
#include <bits/stdc++.h>
using namespace std;

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

#define boost (ios_base::sync_with_stdio(false), cin.tie(nullptr))
#define low(s) (transform(s.begin(), s.end(), s.begin(), ::tolower))
#define Ceil(x, y) ((x + y - 1) / y)
#define fr(n) for (ll i = 0; i < n; i++)
#define frj(n) for (ll j = 0; j < n; j++)
#define frr(i, a, b) for (ll i = (a); i <= (b); i++)
#define rfrr(i, a, b) for (ll i = (b); i <= (a); i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define findc(cn, abc) ((cn.find(abc) != (cn).end()))
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

void solve()
{
    int t = 1;
    ll n, k;
    cin >> t;
    // while(t--)
    for (int q = 1; q <= t; q++)
    {
        ll sum = 0, sum2 = 0;
        cin >> n >> k;
        vi a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum2 += a[i];
            if (i != 0)
            {
                int w = a[i] - a[i - 1];
                if (w > 0)
                    sum += w;
            }
        }
        int z = 0;
        if (sum2 < a[0])
            z = a[0] - sum2;
        cout << "Case " << q << ": " << ((z + sum) * (k - 1)) + sum2 << endl;
    }
}

int main()
{
    boost;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}