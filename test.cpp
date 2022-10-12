#include <bits/stdc++.h>
using ll = long long;
typedef unsigned long long ull;
#define boost ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define low(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define Ceil(x, y) (x + y - 1) / y
#define fr(n) for (int i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define Mod(a, b) (((a % b) + b) % b)
#define sz(s) ((int)s.size())
const double Pi = acos(-1);
#define torad(x)((x) * (Pi / 180.0))
double todeg(double x) { if(x < 0){(x += 2 * Pi);} return ((x * 180) / Pi);}
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b) )
double fixangle(double A){return (A>1)?1:(A<-1)?1:A;} // let angle var capital A, asin(1,-1),acos...
using namespace std;

void solve()
{  

}
int main()
{
    boost;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r+", stdin);5
    //     freopen("output.txt", "w+", stdout);
    // #endif
}

/*
    map <string,int> mp;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        mp[a] = b;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<' '<<it->second<<'\n';
    }
    // *max_element(arr,arr+s);

// bitset<s.size()-1>(x); for binary repesentation !
// fill((arr.start(),arr.end()),1) you can fill 1 of an whole array
// s.find('a') gonna find a index in string s;
// string to int stoi(s) , to long stol(s) ;
// s.substr(0,n)
*/