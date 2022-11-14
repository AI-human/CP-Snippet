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

#define boost (ios_base::sync_with_stdio(false), cin.tie(nullptr))
#define low(s) (transform(s.begin(), s.end(), s.begin(), ::tolower))
#define Ceil(x, y) (x + y - 1) / y)
#define fr(n) for (int i = 0; i < n; i++)
#define frj(n) for (int j = 0; j < n; j++)
#define frr(i, a, b) for (int i = (a); i <= (b); i++)
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


void random(){

}

void solve()
{
    int n;cin>>n;
    vi a(n),b,t;
    fr(n)cin>>a[i];
    t=a;
    int mn=1;
    fr(n)cout<<t[i];
    if(n==1){
        cout<<"-1";
        return;
    }
    sort(all(t));
    bool f=0;
    fr(n){
        if(a[i]==t[i]){
            f=1;
            break;
        }
    }
    if(mn==a[0])
    {   
        mn++;
    }
    for(int i=mn-1;i>0;i--){
        
    }
}


int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}