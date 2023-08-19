#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;} //only for prime m
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
// ll nCrMod(ll n,ll r)
// {
//    if(r==0) return 1;
//    if(r>n) return 0;
//    return mod_div(fact[n],((fact[r]*fact[n-r])%mod),mod);
// }
bool is_integer(double value) {
    double intpart;
    return modf(value, &intpart) == 0.0;
}

// T_prime(n) is if sqrt(n)== prime number


ll power(ll a, ll n) // Binary Exponentiation
{
    ll res = 1;
    while (n)
    {
        if (n % 2 != 0)
        {
            res *= a;
            n--;
        }
        else
        {
            a *= a;
            n /= 2;
        }
    }
    return res;
}

int power(int a, int n, int p) // Moduler Exponentiation
{
    int res = 1;
    while (n)
    {
        if (n % 2 != 0)
        {
            res = (res * a) % p;
            n--;
        }
        else
        {
            a = (a * a) % p;
            n /= 2;
        }
    }
    return res;
}


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
    }
    return true;
}


bool coprime(long long a, long long b) // both factor is 1.
{
    if (__gcd(a, b) == 1)
        return true;
    return false;
}
bool isPrime_Sieve(int n){
  vector<bool> prime(n,1);
  prime[0]=prime[1]=0;
  for(int i=2;i*i<=n;i++){
    if(prime[i]){
      for(int j=i*i;j<n;j+=i){
        prime[j]=0;
      }
    }
  }
}

void sieve(int n)
{ //   O(nlog(n))
    int Max = 1e7;
    vector<bool> prime(Max, 1);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= Max; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= Max; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    { // for printing 0..n number
        if (prime[i])
        {
            cout << i << ' ';
        }
    }
}

void primeFact(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      int cnt=0;
      while(n%i==0){
        cnt++;
        n/=i;
      }
      cout<<i<<'^'<<cnt<<endl;
    }
    if(n>1){
      cout<<n<<'^'<<1<<endl;
    }
  }
}

// Function to find the prime factorization of a given number
void primeFactorization(int n)
{ // O(sqrt(N))
    // Divide by 2 as long as the number is divisible by 2
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n /= 2;
    }

    // Divide by the rest of the prime numbers (starting from 3)
    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }

    // If the number is still greater than 2, it must be a prime itself
    if (n > 2)
    {
        cout << n << " ";
    }
}