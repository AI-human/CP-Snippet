#include<bits/stdc++.h> 
using namespace std;
#define ll long long 
#define sz(a) a.size()

// prefix sum 
vector<ll> prefsum(vector<ll> &a){
    vector<ll> prefsum(sz(a)+1);
    for(int i=0;i<sz(a);i++){
        prefsum[i+1]=prefsum[i]+a[i];
    }
    return prefsum;
}
// if array is sorrted a[0]==a[n-1] means all same number