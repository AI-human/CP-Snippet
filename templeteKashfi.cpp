#include <bits/stdc++.h>
using ll = long long;
using namespace std;


/**/

/*  list of stl
    --------------

    1.  counting 
    vector<int> a={1,1,3};
    count(all(a),1); // return 2; count 1 how many times in vector a;
    ________________________________________________________________________
    2.unique ness 
    sort(all(a));
    int usize = unique(all(a)) - a.begin();
    ..  
    sort(all(vect));
    vect.erase(unique(all(vect)), vect.end());  
    ..
    another not sure //
    a.resize(distance(a.begin(),unique(all(a))));// set only unique element;
    ________________________________________________________________________
    3. int to string 
    int a = 123;
    string s = to_string(a);
    ________________________________________________________________________
    4. string to int 
    int b = stoi(s);
    ________________________________________________________________________

    type cast 
    for long long 
    int x;
    long long c = 1ll * x * x;

    for double 
    int x;
    double  = 1.0 * x/5;


*/
// Permutation

void allperm(vector<int> a, int n)
{
    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));
}

// Array Related
// void countFreq(ll arr[], ll n)
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     unordered_map<ll, ll> frq;
//     for (ll i = 0; i < n; i++)
//         frq[arr[i]]++;
//     for (auto x : frq)
//         cout << x.first << " " << x.second << endl;
// }

// Multi field Sort

// best ds is for this is struct
// struct can be inside of
struct Std
{
    int marks, roll;
};
bool comp(const Std &a, const Std &b)
{
    if (a.marks == b.marks)
        return a.roll < b.roll;
    return a.marks > b.marks;
}

// String
string subString(string s, int n)
{
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;
}
int isSubstr(string s1, string s2)
{
    if (s2.find(s1) != string::npos) // nops means endof string just like set
        return s2.find(s1);
    return -1;
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

void twoDvector(){
    int n;cin>>n;
    vector<vector<int>> b(n,vector<int>(n,0));// 2d vector longcut

    vector<int> a[n+1]; //2D vector shortcut and its input and traverse;
    for(int i=0;i<n;i++){   
        for(int j=0;j<n;j++){
            int x;cin>>x;
            a[i].push_back(x);
        }
    }
    for(int i=0;i<n;i++){   
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}

// maximum subarray
int maxsubarrsum(vector<int> &a){
    int best = 0, sum = 0;
    for(int i = 0; i < a.size(); i++) {
    sum = max(a[i],sum+a[i]);
    best = max(best,sum);
    }
    cout << best << "\n";
}


// Binary Search

// let's not think about r at all;
//  while (!ok(r)) r <<= 1;

// a<<b =    a* 2^b;
// a>>b = a/ 2^b;

/*How many number between given range*/
// low = lower_bound(a.begin(),a.end(),x[i]);
// upp = upper_bound(a.begin(),a.end(),y[i]);
// cout<<(upp-a.begin())-(low-a.begin())<<' ';
// int l= lower_bound(all(a),b)-a.begin();
// bool f = binary_search(all(a),b);

int low_up_bound(int n, int a[], int x)
{
    int l = -1, r = n;
    while (r > l + 1)
    {
        int mid = (l + r) / 2;
        if (x <= a[mid]) // x<=a[mid] means lower, x<a[mid] means upper
            return r = mid;
        else
            return l = mid;
    }
}

int bin_search(vector<int> &a,int x,int l,int u)
{
    while (l <= u)
    {
        int mid = (l + u) / 2;
        if (x == a[mid])
        {
            return mid;
        }
        else if (x < a[mid])
        {
            u = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

// binary search for fraction
/*
double x;
cin >> x;
double l = 0, r = x;
for (int i = 0; i < 100; i++)
{ // atleast remember this
    double m = (l + r) / 2;
    if (m * m > x)
        r = m;
    else
        l = m;
}
*/
//
/* programming vocabulary


*/



/* Dequeue FIFOLIFO
 */

/* STACK LIFO


*/

/* map O(logn)

    map<string , vector<int>>

    // map erase
    auto it = mp.find(name);
    if(it!=mp.end()){
        mp.erase(it);
    }

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