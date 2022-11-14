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

#define f first
#define s second
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

void solve()
{
    stack<int> st;
    st.
}

// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

int main()
{
    boost;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r+", stdin);
    //     freopen("output.txt", "w+", stdout);
    // #endif
}
/* programming vocabulary


*/


/*  list of stl 

    vector<int> a={1,1,3};
    count(all(a),1); // return 2; count 1 how many times in vector a;
    
    a.resize(distance(a.begin(),unique(all(a))));// set only unique element;
    
*/

/* Dequeue FIFOLIFO
*/

/* STACK LIFO


*/

/* map O(logn)

    map<string , vector<int>>

*/

// Set O(logn)
/*
    # Every proccess need O(log n)
    # Inside of a set it is binary search tree (BST) //fault in bst gonna one side bigger
    # Specifically Red-Black-Tree in set which is balanced tree
    # In BST after saving first element, second element
    need to check if its greater or smaller then the first element
    a = {10,2,14,1,13,4,20}
    if first element is
                        10
                       /  \
                      /    \
                    2       14
                   / \      / \
                  /   \    /   \
                 1     4  13   20

    log2(n)

    while(n!=1){
        n/=2;
        cnt++;// cnt=4
    }
    so log2(16) = 4
*/

// Queue O(n)
/*
    1. push(x) : Push element x to the back of queue.
    2. pop() : Removes the element from in front of queue.
    3. peek() : Get the front   element.
    4. empty() : Return whether the queue is empty.
    5. size() : Return the size of queue.

    push = Enqueue
    pop = Dequeue
*/

// Binary Search

// let's not think about r at all;
//  while (ok(r)) r <<= 1;

// a<<b =    a* 2^b;
// a>>b = a/ 2^b;

/*How many number between given range*/
// low = lower_bound(a.begin(),a.end(),x[i]);
// upp = upper_bound(a.begin(),a.end(),y[i]);
// cout<<(upp-a.begin())-(low-a.begin())<<' ';

// int low_up_bound(int n,int a[],int x){
//     int l=-1,r=n;
//     while(r>l+1){
//         int mid = (l+r)/2;
//         if(x<=a[mid]) // x<=a[mid] means lower, x<a[mid] means upper
//            return r=mid;
//         else
//             return l=mid;
//     }
// }

// int bin_search(int n,int a[],int x){
//     int l,u;
//     l=0,u= n-1;
//     while(l<=u){
//         int mid = (l+u)/2;
//         if(x==a[mid]){
//             return mid;
//         }
//         else if(x<a[mid]){
//             u = mid - 1;
//         }
//         else {
//             l = mid + 1;
//         }
//     }
// }

// sort vector pair second element
//     sort(a.begin(),a.end(),[](auto &left, auto &right) {
//     return left.second < right.second;
// });
// or else take second element as first !

// 2d vector     vector<vector<int>> a(n,vi (n));

// map
/*
    map <string,int> mp;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        mp[a] = b;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<' '<<it->second<<'\n';
    }


bitset<s.size()-1>(x); for binary repesentation !
fill((arr.start(),arr.end()),1) you can fill 1 of an whole array
s.find('a') gonna find a index in string s;
string to int stoi(s) , to long stol(s) ;
s.substr(0,n)

find maximum element
    string s,t="";
    cin>>s;
    map<string,int> a;
    for(int i=1;i<=n;i++-1) {
        t="";
        t+= s[i];t+=s[i+1];
        a[t]++;
    }
    int cnt=0;
    string x ="";
    for(auto it:a)
    {
       if(cnt<it.second){
           cnt = it.second;
           x = it.first;
        }
    }
    cout<< x;
*/