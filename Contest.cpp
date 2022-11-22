// // Lets Roll
// // v1
// #ifdef ONLINE_JUDGE
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
// #endif
// #include <bits/stdc++.h>
// using namespace std;

// using str = string;
// using ll = long long;
// using vi = vector<int>;
// using vll = vector<ll>;
// using vs = vector<string>;
// using vvi = vector<vi>;
// using vp = vector<pair<int, int>>;
// using vpl = vector<pair<ll, ll>>;
// using ull = unsigned long long;

// #define ff first
// #define ss second
// #define pb push_back

// #define boost (ios_base::sync_with_stdio(false), cin.tie(nullptr))
// #define low(s) (transform(s.begin(), s.end(), s.begin(), ::tolower))
// #define Ceil(x, y) (x + y - 1) / y)
// #define fr(n) for (int i = 0; i < n; i++)
// #define frj(n) for (int j = 0; j < n; j++)
// #define frr(i, a, b) for (int i = (a); i <= (b); i++)
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define findc(cn, abc) ((cn.find(abc) != (cn).end()))
// #define Mod(a, b) (((a % b) + b) % b)
// #define sz(s) ((int)s.size())
// #define endl '\n'
// #define maxE(a) *max_element(all(a))
// #define minE(a) *min_element(all(a))
// const double Pi = acos(-1);
// #define torad(x) ((x) * (Pi / 180.0))
// double todeg(double x)
// {
//     if (x < 0)
//     {
//         (x += 2 * Pi);
//     }
//     return ((x * 180) / Pi);
// }
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) (a * b / gcd(a, b))
// double fixangle(double A)
// {
//     return (A > 1) ? 1 : (A < -1) ? 1
//            : A;
// } // let angle var capital A, asin(1,-1),acos...
// bool comp(double a, double b)
// {
//     return abs(a - b) < 1e-12;
// }




// void solve()
// {
//     int n, m, k, t; cin >> n >> m >> k >> t;
//     // 1 =
//     vi w;
//     fr(k) {
//         int a, b;
//         cin >> a >> b;
//         w.pb((a-1)*m+ (b-1));
//     }
//     sort(all(w));
//     vi q;
//     fr(t) {
//         int a, b;
//         cin >> a >> b;
//         ll I = (a-1)*m+(b-1);  
//         ll J =0;bool f=0;
//         fr(k){
//             if(w[i]<I){
//                 J++;
//                 continue;
//             }
//             else if(w[i]==I){
//                 f=1;
//                 break;
//             }
//             else if(w[i]>I){
//                 break;
//             }
//         }
//         I -=J;
//         if(f){
//             cout<<"Waste"<<endl;
//         }
//         else if(I%3==0){
//             cout<<"Carrots"<<endl;
//         }
//         else if(I%3==1){
//             cout<<"Kiwis"<<endl;
//         }
//         else{
//             cout<<"Grapes"<<endl;
//         }
//     }

// }



// int main()
// {
//     boost;
//     int t = 1;
//     // cin >> t;
//     while (t--)
//         solve();
// }
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


// void random(){

// }

void solve()
{

}


// Problem A. Two Permutations
// *****    
// **The prefix of length k = first k elements
// The length of the longest common prefix = the largest k for which the first k elements are the same

// Similarly, 

// The suffix of length k = last k elements
// The length of the longest common suffix = the largest k for which the last k elements are the same**
int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}