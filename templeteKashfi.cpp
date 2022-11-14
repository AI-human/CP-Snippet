#include <bits/stdc++.h>
using ll = long long;
using namespace std;

// Permutation
void allperm(vector<int> a, int n)
{
    do
    {
        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));
}

// Nunber theory
bool isPrime(int n)
{ // O(sqrt(n))
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        return true;
    }
}

bool coprime(long long a, long long b)
{
    if (__gcd(a, b) == 1)
        return true;

    else
        return false;
}

void sieve()
{
    vector<int> is_prime(1e7);
    ll N = 1e8;
    for (int i = 1; i <= N; i++)
    {
        is_prime[i] = 1;
    }
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }
}
// Array Related
void countFreq(ll arr[], ll n)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<ll, ll> frq;
    for (ll i = 0; i < n; i++)
        frq[arr[i]]++;
    for (auto x : frq)
        cout << x.first << " " << x.second << endl;
}

// String
string subString(string s, int n)
{
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;
}

// Queue
void printQ(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }
}
bool exist(queue<int> q, int x)
{
    while (!q.empty())
    {
        if (q.front() == x)
            return true;
        q.pop();
    }
    return false;
}
//
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