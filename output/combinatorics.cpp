#include <bits/stdc++.h>
using namespace std;
/*
When the order doesn't matter, it is a Combination.
When the order does matter it is a Permutation.
A Permutation is an ordered Combination.
*/
// Permutation

// repetition 
long long fact(int n){
    long long res=1;
    if(n==1)return 1;
    else{
        res=fact(n)*fact(n-1); 
    }
    return res;
}
// Optimized factorial function
int opt_fact(int n) {
  int result = 1;
  
  // Use loop unrolling
  for(int i = 2; i <= n; i+=4) {
    result *= i;
    if(i+1 <= n) result *= (i+1); 
    if(i+2 <= n) result *= (i+2);
    if(i+3 <= n) result *= (i+3);
  }

  return result;
}

// no repetition    
long long nPr(int n,int r){
    return (r<n) ? fact(n)/(fact(n-r)):0;
}


// Combination
//  no repetition
long long nCr(int n,int r){// O(2^n)
    return (n>r)?fact(n)/(fact(r)*fact(n-r)):0;
}

long long nCr(int n, int r) {// O(r)-> O(n)
    if (r > n) {
        return 0; // Invalid input: r should be less than or equal to n
    }

    long long result = 1;
    for (int i = 1; i <= r; ++i) {
        result *= n - i + 1;
        result /= i;
    }

    return result;
}

// Finding Power of Factorial Divisor O(logk(n)) - Legendre's formula.
int fact_pow (int n, int k) {
    int res = 0;
    while (n) {
        n /= k;
        res += n;
    }
    return res;
}
