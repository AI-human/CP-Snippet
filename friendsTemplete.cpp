#include <bits/stdc++.h>

using namespace std;

#define ll  long long

#define FastIO  ios_base::sync_with_stdio(false)

#define PI  acos(-1.0)

#define mod(a, b)   (((a) % (b)) + (b)) % (b)

#define sz(v)   (ll) v.size()

#define MAX(a, b)   ((a) >= (b)) ? (a) : (b)

#define MIN(a, b)   ((a) <= (b)) ? (a) : (b)

#define all(v)  v.begin(), v.end()

#define rall(v)  v.rbegin(), v.rend()

#define YES cout << "YES" << endl;

#define NO cout << "NO" << endl;

#define Yes cout << "Yes" << endl;

#define No cout << "No" << endl;

#define yes cout << "yes" << endl;

#define no cout << "no" << endl;

#define vec_IN(v, N)    for(i = 0; i < (N); i++)                    \
                        {                                           \
                            ll num;                                 \
                            cin >> num;                             \
                            v.push_back(num);                       \
                        }

#define set_IN(s, N)    for(i = 0; i < (N); i++)                    \
                        {                                           \
                            ll num;                                 \
                            cin >> num;                             \
                            s.insert(num);                          \
                        }

#define OUT(v)  for(auto x: v)                                      \
                    cout << x << " ";

#define PAIR_OUT(v)  for(auto x: v)                                 \
                    cout << x.first << " " << x.second << endl;

#define vec_2D_IN(vec, M, N) for(i = 0; i < (M); i++)               \
                             {                                      \
                                vector <ll> v;                      \
                                for(j = 0; j < (N); j++)            \
                                {                                   \
                                    cin >> num;                     \
                                    v.push_back(num);               \
                                }                                   \
                                vec.push_back(v);                   \
                             }

#define vec_2D_OUT(vec, M, N)    for(i = 0; i < (M); i++)           \
                                 {                                  \
                                    for(j = 0; j < (N); j++)        \
                                        cout << vec[i][j] << " ";   \
                                    cout << endl;                   \
                                 }

#define PRE_SUM(vec)    for(i = 0; i < sz(vec); i++)    \
                        {                               \
                            sum += vec[i];              \
                            vec[i] = sum;               \
                        }

int doublecmp(double a, double b)
{
    if(fabs(a - b) <= 1e-10)
        return 0;

    else if(a > b)  return 1;

    else    return -1;
}

ll __gcd(ll x, ll y)
{
    if (y == 0) return x;
    return __gcd(y, x%y);
}

ll __lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

bool isVowel(char ch)   {
    string vowel = "aeiouAEIOU";

    for(int i = 0; vowel[i]; i++)   {
        if(vowel[i] == ch)  return true;
    }

    return false;
}

string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length();

    reverse(str1.begin(), str1.end());

    reverse(str2.begin(), str2.end());

    int carry = 0;

    for (int i = 0; i < n1; i++)
    {
        int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);

        str.push_back(sum % 10 + '0');

        carry = sum / 10;
    }

    for (int i = n1; i < n2; i++)
    {
        int sum = ((str2[i] - '0') + carry);

        str.push_back(sum % 10 + '0');

        carry = sum/10;
    }

    if(carry)  str.push_back(carry + '0');

    reverse(str.begin(), str.end());

    return str;
}

string multiply(string a, string b)
{
    string r, t = "0", U;

    int num1, num2, val, carry = 0, k;

    reverse(a.begin(), a.end());

    reverse(b.begin(), b.end());

    for(int i = 0; a[i]; i++)
    {
        num1 = a[i] - '0';

        for(int j = 0; b[j]; j++)
        {
            num2 = b[j] - '0';

            carry += num1 * num2;

            r += (carry % 10) + '0';

            carry /= 10;
        }

        if(carry)
        {
            r += (carry % 10) + '0';

            carry /= 10;
        }

        reverse(r.begin(), r.end());

        t = findSum(t, r);

        U += t.back();

        t.pop_back();

        r = "";
    }

    reverse(t.begin(), t.end());

    U += t;

    reverse(U.begin(), U.end());

    return U;
}

bool isSmaller(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)    return true;

    if (n2 < n1)    return false;

    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;

    return false;
}

string findDiff(string str1, string str2)
{
    if (isSmaller(str1, str2))
        swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;

    for (int i = 0; i < n2; i++) {

        int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);

        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    for (int i = n2; i < n1; i++) {
        int sub = ((str1[i] - '0') - carry);

        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    while(str.back() == '0')    {
        str.pop_back();
    }

    reverse(str.begin(), str.end());

    if(!sz(str))    return "0";

    return str;
}

string binaryfy(ll num)    {

    string a;

    while(num)    {

        if(num % 2)   a += '1';
        else    a += '0';

        num /= 2;
    }

    reverse(a.begin(), a.end());

    return a;
}

ll power(ll a, ll b)   {

    ll val = 1;

    while(b > 0)    {

        if(b & 1)   val *= a;

        b >>= 1;

        a *= a;
    }

    return val;
}

pair <ll, ll> intersect(pair <ll, ll> a, pair <ll, ll> b) {

    pair <ll, ll> c;

    if(a.second < b.first || b.second < a.first)  {
        c.first = -1, c.second = -1;
        return c;
    }

    vector <ll> vec;

    vec.push_back(a.first);
    vec.push_back(a.second);
    vec.push_back(b.first);
    vec.push_back(b.second);

    sort(vec.begin(), vec.end());

    c.first = vec[1], c.second = vec[2];

    return c;
}

double toRad(double X)  {
    return (PI * X) / 180.0;
}

double toDeg(double X)  {
    if(X < 0)   X += 2 * PI;
    return (180.0 * X) / PI;
}

double fixAngle(double A)   {
    return A > 1 ? 1 : (A < -1 ? -1 : A);
}

bool coprime(long long a, long long b)
{
    if(__gcd(a, b) == 1)    return true;

    else    return false;
}

bool comp(pair <ll, ll> a, pair <ll, ll> b) {

    return a.second > b.second;
}

bool ok()    {

}

void solve()    {

    ll l, l1, l2, r1, r2, M, N, O, P, m = 0, val = 0, num = 0, n = 0, o = 0, p = 0, q = 0, r, i, j, k = 1, pos, count = 0, sum = 0, min = LONG_MAX, max = LONG_MIN, index = 0;

    static int t = 1;

    double x, y, z;

    bool f = true, flag = false;

    char ch;

    vector <ll> vec, v, va, vb, odd, even;

    string a, b, c, d, e;

    set <ll> st;

    map <ll, ll> mp;

    pair <ll, ll> pr, qr, ss, ee;

    deque <ll> dq;

    cin >> N;

    vec_IN(vec, N);

    v = vec;

    sort(all(v));

    if(vec[0] == v[0])  {
        YES;
    }

    else    {
        NO;
    }
}

int main()
{
    FastIO;

    ll M, N, O, P, m = 1, val = 0, num = 0, n = 0, o, p = 0, q = 0, r, i, j, k, pos, count = 0, sum = 0, min = INT_MAX, max = INT_MIN, index = 0;

    bool f = true;

    string a, b, c, d;

    //solve();

    cin >> M;

    while(M--)  {
        solve();
    }
}

#include<bits/stdc++.h>
using namespace std;
///POLICY BASED DATA STRUCTURE..
///order_of_key return number of element which are strictly greater/smaller than x..
///find_by_order return ans iterator corresponding to the xth position of the set..
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define sz(n) (int)(n).size()
#define eps 1e-10
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define ye s cout << "yes" << endl;
#define no cout << "no" << endl;
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))
#define pi 2*acos(0)  /// acos(-1.0)
#define findc(cn, abc)  ((cn).find(abc) != (cn).end())
#define c(x) cin >> x;
#define vi vector<int>
#define f(n) for(int i=0;i<(n);i++)
#define deg_to_rad(x) ((x)*((2*acos(0))/180.0))
#define rad_to_deg(x) ((x)*(180.0/(2*acos(0))))
#define out(x) cout << (x) << endl;
#define sp << " " <<
#define fi first
#define sc second
#define mp make_pair
#define __lcm(a,b) (a/__gcd(a,b)*b)
typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int M = 1e9 + 7;
const int N = 200020;
#define cost (ll)1000000000000
typedef unsigned long long ull;
typedef vector<ll> vl;
//bool vis[2010];
//vector<int>edge[2010];
ll n,m,i,k,h;
bool check(ll x,ll y)
{
    return (x>=0 && y>=0 && x<n && y<m);
}
ll dis(ll x1,ll y1,ll x2,ll y2)
{
    return (abs(x1-x2)+abs(y1-y2));
}
bool cmp(pair<ll,ll>p1,pair<ll,ll>p2)
{
    return p1.fi<p2.fi;
}
vector<ll>prime_divisor[N];
//ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
//ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
//ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
//ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
//ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
//ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;} //only for prime m
//ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
//ll nCrMod(ll n,ll r)
//{
//    if(r==0) return 1;
//    if(r>n) return 0;
//    return mod_div(fact[n],((fact[r]*fact[n-r])%mod),mod);
//}
struct prob
{
    ll idx,x1,y1;
};
bool cp(prob a,prob b)
{
    if((1LL*a.x1*b.y1)==(1LL*b.x1*a.y1))
    {
        return a.idx<b.idx;
    }
    return 1LL*a.x1*b.y1>1LL*b.x1*a.y1;
}

int main()
{
    faster;
    //srand(time(NULL));
//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    ll t,i,j,q,x,g,z,d,u,v,p,y,l,r,mod=1e9+7,mx,mn,mx1,mn1,cnt1,cnt;
    t=1;
    //cin>>t;
    while(t--)
    {
        //string s2,s3,s;
        string s[1000],s1[1000];
        cin>>n;
        vector<prob>v;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            v.pb({i+1,x,y});
        }
         sort(all(v),cp);
         //sort(all(v),cp1);
         for(i=0;i<n;i++)
         {
             cout<<v[i].idx<<" ";
         }
         cout<<endl;

    }
    return 0;
}


