#include <bits/stdc++.h>
using namespace std;

/*
DP - in 3 steps
1. Memoization
2. Overlapping subproblems
3. Optimal substructure 
*/

long long cnt=0;

// step 1
int dp[1000];


int fib(int n){
    cnt++;
    if(n<=2){
        dp[1]=1;
        return 1;
    }
    // step 2
    if(dp[n-1]!=0){
        return dp[n-1];
    }
    int x = fib(n-1)+fib(n-2);
    
    // step 3
    return dp[n-1] = x;
    
}

// longest commont subsequence
const int maximum = 1000;
int lcs(string X, string Y, int m, int n, int dp[][maximum])
{
    // base case
    if (m == 0 || n == 0)
        return 0;
 
    // if the same state has already been
    // computed
    if (dp[m - 1][n - 1] != -1)
        return dp[m - 1][n - 1];
 
    // if equal, then we store the value of the
    // function call
    if (X[m - 1] == Y[n - 1]) {
 
        // store it in arr to avoid further repetitive
        // work in future function calls
        dp[m - 1][n - 1] = 1 + lcs(X, Y, m - 1, n - 1, dp);
 
        return dp[m - 1][n - 1];
    }
    else {
 
        // store it in arr to avoid further repetitive
        // work in future function calls
        dp[m - 1][n - 1] = max(lcs(X, Y, m, n - 1, dp),
                               lcs(X, Y, m - 1, n, dp));
 
        return dp[m - 1][n - 1];
    }
}

//---------------------------------------

int main(){
    // also step 1
    memset(dp,-1,sizeof(dp));
}
