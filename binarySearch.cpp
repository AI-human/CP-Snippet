#include <bits/stdc++.h>
using namespace std;


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
// lower bound l=-1, r=n
int x;
vector<int> a;
int lb = (lower_bound(a.begin(),a.end(),x)-a.begin() )+1;
int low_bound(vector<int> &a,int x,int l,int r) {
    while (l+1< r) {
        int mid = (l + r) / 2;
        if (x <= a[mid]) {
            r = mid;
        } else {
            l = mid ;
        }
    }
    return l;
}
// upper bound // l=-1, r=n
int ub = (upper_bound(a.begin(),a.end(),x)-a.begin() )+1;

int upp_bound(vector<int> &a,int x,int l,int r) {
    while(r >l+ 1) {
        int m = (l + r) / 2;
        if(x < a[m]) {
            r = m; // a[l] <= k < a[m] <= a[r]
        } else {
            l = m; // a[l] <= a[m] <= k < a[r]
        }
    }
    return r;
}