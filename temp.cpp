// #include <bits/stdc++.h>
// using namespace std;

// // #include <ext/pb_ds/assoc_container.hpp>                                                            //common file for PBDS
// // #include <ext/pb_ds/tree_policy.hpp>                                                                //including tree_order_statistics_node_update
// // using namespace __gnu_pbds;                       
// #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);                                                  // namespace
// #define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> // macro definition

// #define debug(...) cerr << "[" << #__VA_ARGS__ << "] =>", dbg_out(__VA_ARGS__)
// template <typename A, typename B>
// ostream &operator<<(ostream &os, const pair<A, B> &p)
// {
//    return os << '(' << p.first << ", " << p.second << ')';
// }
// template < typename T_container, typename T = typename enable_if < !is_same<T_container, string>::value, typename T_container::value_type >::type >
// ostream & operator<<(ostream &os, const T_container &v)
// {
//    os << '{';
//    string sep;
//    for (const T &x : v)
//       os << sep << x, sep = ", ";
//    return os << '}';
// }
// void dbg_out() { cerr << endl; }
// template <typename Up, typename... Down>
// void dbg_out(Up U, Down... D)
// {
//    cerr << ' ' << U;
//    dbg_out(D...);
// }

// typedef long double ld;
// typedef long long ll;
// typedef unsigned long long ull;
// typedef pair<int, int> pii;
// typedef vector<ll> vll;
// typedef pair<ll, ll> pll;
// #define ss second
// #define ff first
// #define pb push_back
// #define ppb pop_back
// #define pf push_front
// #define mkp make_pair
// #define PI acos(1);
// #define setp setprecision
// #define no cout << "No" << endl;
// #define yes cout << "Yes" << endl;
// #define Yes cout << "YES" << endl;
// #define No cout << "NO" << endl;
// #define bye continue;
// #define edl cout << endl;
// #define all(x) (x).begin(), (x).end()
// #define rall(s) s.rbegin(), s.rend()
// #define sz(v) ((int)(v).size())
// #define fo(n) for (int i = 0; i < n; i++)
// #define rfo(i, n) for (i = n - 1; i >= 0; i++)
// #define az(x) memset(x, 0, sizeof(x));
// #define eps 1e-12
// #define inf LLONG_MAX
// #define MOD(a, mod) (((a % mod + mod) % mod) < 0 ? ((a % mod + mod) % mod) + mod : ((a % mod + mod) % mod))
// #define tani(a) atan(a) / (pi / 180)
// #define sini(a) asin(a) / (pi / 180)
// #define cosi(a) acos(a) / (pi / 180)
// #define cos(a) cos(a *pi / 180)
// #define sin(a) sin(a *pi / 180)
// #define tan(a) tan(a *pi / 180)
// #define srt(x) sort(x.begin(), x.end())
// #define rsrt(x) sort(x.begin(), x.end(), greater<>())
// #define torad(x) ((x) * ((2 * acos(0)) / 180.0))
// #define todeg(x) ((x) * (180.0 / (2 * acos(0))))
// #define fixAngle(x) ((x) > 1 ? 1 : (x) < -1 ? -1 \
//                                             : (x))
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a) * ((b) / gcd(a, b)))
// #define scanm(n, mp)       \
//    for (i = 0; i < n; i++) \
//    {                       \
//       ll x;                \
//       cin >> x, mp[x]++;   \
//    }
// #define printv(v)              \
//    for (i = 0; i < sz(v); i++) \
//       cout << v[i] << ' ';     \
//    edl
// #define scanv(n, v)        \
//    for (i = 0; i < n; i++) \
//    {                       \
//       ll x;                \
//       cin >> x, v.pb(x);   \
//    }
// #define trzero(x) __builtin_ctz(x)
// #define parity(x) __builtin_parity(x)
// #define countone(x) __builtin_popcount(x)

// int sum_digit(int x)
// {
//    int sum = 0;
//    while (x > 0)
//    {
//       sum += x % 10;
//       x /= 10;
//    }
//    return sum;
// }
// ll reverse_num(ll n)
// {
//    ll tmp = n, ans = 0, r;
//    while (tmp > 0)
//    {
//       r = tmp % 10;
//       ans = ans * 10 + r;
//       tmp /= 10;
//    }
//    return ans;
// }
// ll factorial(ll n)
// {
//    ll i, ans = 1;
//    for (i = n; i > 1; i--)
//    {
//       ans *= i;
//    }
//    return ans;
// }
// ll to_int(string s)
// {
//    int len = sz(s);
//    ll ans = 0;
//    fo(len) ans = ans * 10 + (int)s[i] - '0';
//    return ans;
// }
// string to_str(ll x)
// {
//    stringstream ss;
//    ss << x;
//    return ss.str();
// }
// ll todec(string s) { return stoi(s, 0, 2); }
// bool ispalin(string s)
// {
//    bool flag = true;
//    for (int i = 0; i < sz(s) / 2; i++)
//    {
//       if (s[i] != s[sz(s) - 1 - i])
//       {
//          flag = false;
//          break;
//       }
//    }
//    return flag;
// }
// string toBinary(int n)
// {
//    string r;
//    while (n != 0)
//    {
//       r = (n % 2 == 0 ? "0" : "1") + r;
//       n /= 2;
//    }
//    return r;
// }
// bool isPowerOfTwo(int n)
// {
//    if (n == 0)
//       return false;
//    return (ceil(log2(n)) == floor(log2(n)));
// }
// bool issorted(std::vector<ll> &v)
// {
//    fo(sz(v) - 1) if (v[i] > v[i + 1]) return false;
//    return true;
// }
// bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return a.second < b.second; }
// // sort(vect.begin(), vect.end(), sortbysec);
// int dx[] = { -1, 1, 0, 0};
// int dy[] = {0, 0, -1, 1};
// #define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// ll mx = 100000;
// bool is_prime[100001];
// vector<ll> primes;
// void solve()
// {
//    int n;
//    cin >> n;
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//       cin >> arr[i];
//    }
//    int s = 0, d = 0, cnt = 0;
//    for (int i = 0, j = n - 1; i < n, j >= 0; i+=2, j-=2)
//    {
//       if (arr[i] < arr[j])
//       {  
//          s+=arr[j];
//       }
//       else if (arr[i] > arr[j])
//       { 
//          s+=arr[i];
//       }
//    }
//    cout << s << ' ' <<d;
//  }

// void Prongs();

// int main()
// {
//    boost;
//    // seive();
//    solve();
//    return 0;
// }

// void Prongs()
// {
// }


// //////////////////////////////////////////////////////
// ///***** LIABRY-SECTION *****///
// #include <bits/stdc++.h>
// using namespace std;

// ///***** DEFINE-SECTION *****///
// const int N = 1e5+10;
// #define ll long long int
// #define all(x) (x).begin(),(x).end()
// #define sz(x) (x).size()
// #define eps 1e-8
// #define pi 2*acos(0)  /// acos(-1.0)
// #define all(x) (x).begin(),(x).end()
// #define findc(cn, abc)  ((cn).find(abc) != (cn).end())
// #define c(x) cin >> x;
// #define vi vector<int>
// #define f(n) for(int i=0;i<(n);i++)
// #define Max(a,b,c) (a>b)&&(a>c) ? a : ((b>c) ? b:c)
// #define Min(a,b,c) (a<b)&&(a<c) ? a : ((b<c) ? b:c)
// #define deg_to_rad(x) ((x)*((2*acos(0))/180.0))
// #define rad_to_deg(x) ((x)*(180.0/(2*acos(0))))
// #define out(x) cout << (x) << endl;
// #define ha out("YES")
// #define na out("NO")
// #define br cout << endl;
// #define re return
// #define sp << " " <<
// #define pb push_back
// #define iter vi :: iterator
// #define fi first
// #define sc second
// #define d double
// ///***** FUNCTION-SECTION *****///
// void printVec(vector<int> v2, string s = "")
// {
//     cout<<s;
//     for (int i = 0; i < (int)v2.size(); ++i)
//         cout<<v2[i]<<" ";
//     cout<<"\n";
// }

// ///*** BITS ***///
// void binaryNum(int num) ///*** Print Binary Number ***///
// {
//     for(int i=31; i>=0; i--)
//     {
//         cout << ((num>>i) & 1);
//     }
//     cout << endl;
// }

// ll binary_str_to_dec(string s)
// {
//     ll dec_num = 0,p=0;

//     for(ll i = s.size()-1; i >= 0; i--)
//     {
//         if(s[i] == '1')
//         {
//             dec_num+= pow(2,p);
//         }
//         p++;
//     }


//     return dec_num;
// }




// bool Bit_set_unset_check(int num,int bit_number_check)
// {
//     if((num & (1 << bit_number_check)) != 0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// void Bit_set(int num,int set_bit)
// {
//     //binaryNum(num(1<<set_bit));
// }

// void Bit_unset(int num,int unset_bit)
// {
//     binaryNum(num & (~(1 << unset_bit)));
// }

// void Bit_toggle(int num,int toggle_bit)
// {
//     binaryNum(num ^ (1 << toggle_bit));
// }

// int set_Bit_cnt(int num)
// {
//     int cnt = 0;
//     for(int i=31; i>=0; i--)
//     {
//         if((num & (1 << i)) != 0)
//         {
//             cnt++;
//         }
//     }
//     return cnt;
// }
// int unset_Bit_cnt(int num)
// {
//     int cnt = 0;
//     for(int i=31; i>=0; i--)
//     {
//         if((num & (1 << i)) == 0)
//         {
//             cnt++;
//         }
//     }
//     return cnt;
// }
// void uptolow(char x)
// {
//     /*char ch = x | (1<<5);
//     cout << ch << endl;*/
//     cout << char(x | ' ') << endl;
// }
// void lowtoup(char x)
// {
//     /*char ch = x & (~(1<<5));
//     cout << ch << endl;*/
//     cout << char(x & '_') << endl;
// }

// ///*** BINARY EXPONENTITAION ***///
// ll power(ll base,ll n,ll mod)
// {
//     ll result = 1;
//     while(n)
//     {
//         if(n%2 != 0)
//         {
//             result=(result*base)%mod; /// mod = 1e9
//             n--;
//         }
//         else
//         {
//             base=(base*base)%mod;  /// if need last digit use 10 base
//             n/=2;
//         }
//     }

//     return result;
// }


// void pow2_check(int n)
// {
//     if((n & (n-1)))
//     {
//         cout << "NOT power of 2" << endl;
//     }
//     else
//         cout << "power of 2" << endl;
// }

// int One_odd(int ar[],int n)
// {
//     int ans=0;
//     f(n)
//     {
//         ans^=ar[i];
//     }
//     return ans;
// }

// void int_subset() /// time_limit --->> (2^n * n)
// {
//     int n;
//     c(n)
//     vector<int>a(n);
//     f(n) c(a[i]);

//     int subset_limit = 1<<n; /// pow(2,n)
//     for(int mask = 1; mask < subset_limit ; mask++)
//     {
//         f(n)
//         {
//             if(mask & (1<<i))
//             {
//                 cout << a[i] << " ";
//             }
//         }
//         br
//     }
// }
// void char_subset()
// {
//     int n;
//     c(n)
//     vector<char>a(n);
//     f(n) c(a[i]);

//     int subset_limit = 1<<n; /// pow(2,n)
//     for(int mask = 1; mask < subset_limit ; mask++)
//     {
//         f(n)
//         {
//             if(mask & (1<<i))
//             {
//                 cout << a[i] << " ";
//             }
//         }
//         br
//     }
// }
// ///***************** Extra_Resourse *****************\\\
// ///*** Muliple/div 2 by bit ***///
// /// int n = 5;
// /// For DIV BY 2 -->> cout << (n >> 1) << endl; -->>  n/2 = 2;
// /// For MULTIPLE BY 2 -->> cout << (n >> 1) << endl; -->> n*2 = 10;
// ///void Swap(int a,int b)
// ///{
// ///   a = a ^ b;
// ///   b = b ^ a;
// ///   a = a ^ b;
// ///}
// /// Given a rational number calculate no.of matches = b{pow(10,digit after decimal point)} / gcd{pow(10,digit before decimal point),pow(10,digit after decimal point)}
// /// From A to B range shortcut : (b-a+1)

// void eco(int num)
// {
//     if(num&1) cout << "Odd" << endl;
//     else cout << "Even" << endl;
// }

// int comp_double(double a,double b)  ///*** DOUBLE_COMPARE ***///
// {
//     if(fabs(a-b) <= eps)
//         return 0;
//     return a < b ? -1 : 1;
// }

// int cel(int a,int b) ///*** CEIL ***///
// {
//     return (a+b-1) / b;
// }

// int rnd(int a,int b) ///*** ROUND ***///
// {
//     ///TYPE-1
//     if(a>0)
//         return (a+b/2) / b;
//     else
//         return (a-b/2) / b;

//     ///TYPE-2
//     ///round(x) == x<0 ? ceil(x-0.5) : floor(x+0.5);

//     ///TYPE-3
//     ///To round multiple of a specified amount
//     ///round(x,m) = round(x/m)*m;
// }
// int all_mod(int a,int b)  ///*** MOD ***///
// {
//     ///Type-1
//     return ((( a % b )+ b )% b);

//     ///Type-2
//     ///int r(reminder) = (a - b) * floor(a/b);
//     //re r;

//     ///Type-3
//     //while(a>=b) a-=b;
//     //while(a<0) a+=b;
//     //re a;
// }
// int gcd(int a,int b) /// time_limit --->> log(n)
// {
//     /// type-1
//     /*if(a == 0)
//     re b;
//     if(b == 0)
//     re a;

//     while(a != b)
//     {
//         if(a>b)
//             a = a-b;
//         else
//             b = b -a;
//     }
//     re a;*/

//     /// type-2
//     if(b == 0) re a;
//     re gcd(b,a%b);

//     ///type-3
//     /*while(b!=0)
//     {
//         int rem = a%b;
//         a = b;
//         b = rem;
//     }
//     re a;*/


// }
// int lcm(int a,int b)
// {
//     int x = (a*b) / gcd(a,b);
//     return x;
// }

// void div(int n)
// {
//     const int N = 1e5+10;
//     vector<int>divisors[N];

//     for(int i=2; i<N; i++)
//     {
//         for(int j=i; j<N; j+=i)
//         {
//             divisors[j].push_back(i);
//         }
//     }

//     int sum = 0;
//     for(int x : divisors[n])
//     {
//         sum+=x;
//         cout << x << " ";
//     }
//     br
//     out(sum)
// }

// bool prime(int a)
// {
//     const int N = 1e7+10;
//     vector<bool> isprime(N,true);
//     vector<int> hp(N,0),lp(N,0);

//     isprime[0] = isprime[1] = false;
//     for(int i=2; i<N; i++)
//     {
//         if(isprime[i])
//         {
//             lp[i] = hp[i] = i;
//             for(int j=2*i; j<N; j+=i)
//             {
//                 isprime[j] = false;
//                 hp[j] = i;
//                 if(lp[j] == 0)
//                 {
//                     lp[j] = i;
//                 }
//             }
//         }
//     }

//     return isprime[a];

// }
// int hp_prime(int a)
// {
//     const int N = 1e7+10;
//     vector<bool> isprime(N,true);
//     vector<int> hp(N,0),lp(N,0);

//     isprime[0] = isprime[1] = false;
//     for(int i=2; i<N; i++)
//     {
//         if(isprime[i])
//         {
//             lp[i] = hp[i] = i;
//             for(int j=2*i; j<N; j+=i)
//             {
//                 isprime[j] = false;
//                 hp[j] = i;
//                 if(lp[j] == 0)
//                 {
//                     lp[j] = i;
//                 }
//             }
//         }
//     }

//     return hp[a];

// }

// void prime_frac(int a)
// {
//     map<int,int>Prime_factors;

//     while(a>1)
//     {
//         int prime_factor = hp_prime(a);
//         while(a % prime_factor == 0)
//         {
//             a /= prime_factor;
//             Prime_factors[prime_factor]++;
//             //Prime_factors.push_back(prime_factor);
//         }
//     }
//     //for(int i=0;i<Prime_factors.size();i++)
//     //cout << Prime_factors[i] << " ";
//     for(auto factor : Prime_factors)
//     {
//         cout << factor.first << "^" << factor.second << endl;
//     }


// }
// ///*** Clock ***///
// int after_clock(int present_time,int after)
// {
//     return ((present_time+after)%12);
// }
// int before_clock(int present_time,int before)
// {
//     return ((((present_time-before)%12)+12)%12);
// }

// ///*** Traingle ***///
// double fixAngle(double A)
// {
//     return A > 1 ? 1 :(A < -1 ? -1 : A);
// }

// /// sin(A)/a = sin(B)/b = sin(C)/c
// double getSide_a_bAB(double b,double A, double B)
// {
//     return (sin(A)*b) / sin(B);
// }

// double getAngle_A_abB(double a,double b, double B)
// {
//     return asin(fixAngle((a*sin(B)) / b ));
// }

// /// a^2 = b^2 + c^2 - 2*b*c*cos(A)
// double getAngle_A_abc(double a, double b, double c)
// {
//     return acos(fixAngle( (b*b+c-a*a) / (2*b*c) ));
// }

// void prefix(string s,string t)
// {
//     if(s.size() > t.size())
//     {
//         out("No")
//     }
//     else
//     {
//         int cnt =0 ;
//         int x = s.size();
//         for(int i=0; i<x; i++)
//         {
//             if(s[i] == t[i])
//                 cnt++;
//         }

//         if(cnt == x) out("Yes")
//             else out("No")
//             }

// }

// int prefix_sum(int arr[],int n,int query)
// {
//     ///int n;
//     ///c(n)
//     ///int arr[n+1];
//     ///f(n) c(arr[i])

//     int fre[n+1];
//     fre[0] = arr[0];
//     for(int i=1; i<n; i++)
//     {
//         fre[i] = fre[i-1] + arr[i];
//     }

//     ///int q;
//     ///c(q)
//     while(query--)
//     {
//         int l,r;
//         c(l)c(r)
//         if(l == 0)
//         {
//             int x = fre[r];
//             return x;
//         }
//         else
//         {
//             int x = (fre[r] - fre[l-1]);
//             return x;
//         }
//     }
// }

// void TwoD_prefix_sum()
// {
//     int n,m;
//     c(n)c(m)

//     int arr[n][m];
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             c(arr[i][j])
//         }
//     }

//     int pre[n][m];
//     pre[0][0] = arr[0][0];
//     ///  1st Row prefix sum
//     for(int j=1; j<m; j++)
//         pre[0][j] = pre[0][j-1] + arr[0][j];

//     ///  1st Col prefix sum
//     for(int i=1; i<n; i++)
//         pre[i][0] = pre[i-1][0] + arr[i][0];

//     ///  pre[i][j] = pre[i][j-1](left) + pre[i-1][j](right) + arr[i][j] (own) - pre[i-1][j-1] (overlap);
//     for(int i=1; i<n; i++)
//     {
//         for(int j=1; j<m; j++)
//         {
//             pre[i][j] = pre[i][j-1] + pre[i-1][j] + arr[i][j] - pre[i-1][j-1];
//         }
//     }

//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<m; j++)
//         {
//             cout << pre[i][j] << " ";
//         }
//         br
//     }
// }
// void diff_prefix_sum()
// {
//     int n;
//     c(n)

//     int arr[n+1];
//     f(n) c(arr[i])

//     int diff[n+1] = {0};
//     int q;
//     c(q)

//     while(q--)
//     {
//         int x,y,v;
//         cin>> x >> y >> v;

//         diff[x] +=v;
//         diff[y+1] -=v;
//     }

//     for(int i=1; i<n; i++)  diff[i] += diff[i-1];

//     f(n) diff[i] += arr[i];

//     f(n) cout << diff[i] << " ";

// }

// ///*** BIG INTEGER ***///

// ///*** BIG ADD ***///
// vector<int> big_add(vi x, vi y)
// {
//     reverse(all(x));
//     reverse(all(y));
//     ll len = min(sz(x), sz(y));
//     ll carry = 0;
//     vi ans;
//     for (int i = 0; i < len; i++)
//     {
//         ll val = x[i] + y[i] + carry;
//         carry = val / 10;
//         ans.pb(val % 10);
//     }
//     if (sz(x) > sz(y))
//     {
//         for (int i = len; i < sz(x); i++)
//         {
//             ll val = x[i] + carry;
//             carry = val / 10;
//             ans.pb(val % 10);

//         }
//     }
//     if (sz(y) > sz(x))
//     {
//         for (int i = len; i < sz(y); i++)
//         {
//             ll val = y[i] + carry;
//             carry = val / 10;
//             ans.pb(val % 10);

//         }
//     }
//     while (carry)
//     {
//         ans.pb(carry % 10);
//         carry /= 10;
//     }
//     reverse(all(ans));
//     return ans;

// }

// ///*** BIG SUB ***///
// vector<int> big_sub(vi x, vi y)
// {
//     reverse(all(x));
//     reverse(all(y));
//     vi ans;
//     vi res;
//     int len = sz(y);
//     for (int i = 0; i < len; i++)
//     {
//         if (x[i] < y[i])
//         {
//             x[i + 1]--;
//             ans.pb(x[i] + 10 - y[i]);
//         }
//         else
//         {
//             ans.pb(x[i] - y[i]);
//         }
//     }
//     if (sz(x) > sz(y))
//     {
//         for (int i = len; i < sz(x); i++)
//         {
//             if (x[i] < 0)
//             {
//                 x[i + 1]--;
//                 ans.pb(x[i] + 10);
//             }
//             else
//                 ans.pb(x[i]);
//         }
//     }
//     reverse(all(ans));
//     int i = 0;

//     while (ans[i] == 0)
//         i++;
//     for ( ; i < sz(ans); i++)
//         res.pb(ans[i]);
//     return res;
// }

// ///*** BIG DIV ***///
// vector<int> big_div(vi x, ll y)
// {
//     vi ans;
//     int rem = 0;
//     for (int  i = 0; i < sz(x); i++)
//     {
//         if (rem)
//         {
//             rem = rem * 10 + x[i];
//             // cout << rem << endl;
//             ans.pb(rem / y);
//             rem = rem % y;
//         }
//         else
//         {
//             if (x[i] < y)
//             {
//                 rem += x[i];
//                 //cout << rem << endl;
//                 ans.pb(0);
//             }
//             else
//             {

//                 rem = x[i] % y;
//                 ans.pb(x[i] / 2);
//             }
//         }
//     }
//     vi res;
//     int i = 0;
//     while (ans[i] == 0)
//         i++;
//     for (; i < sz(ans); i++)
//         res.pb(ans[i]);
//     return res;

// }

// ///*** BIG MILTIPLE ***///
// string Big_multiply(string num1, string num2)
// {
//     // handle edge-case where the product is 0
//     if (num1 == "0" || num2 == "0") return "0";

//     // num1.size() + num2.size() == max no. of digits
//     vector<int> num(num1.size() + num2.size(), 0);

//     // build the number by multiplying one digit at the time
//     for (int i = num1.size() - 1; i >= 0; --i)
//     {
//         int carry = 0;
//         for (int j = num2.size() - 1; j >= 0; --j)
//         {
//             num[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
//             num[i + j] += num[i + j + 1] / 10;
//             num[i + j + 1] %= 10;
//         }
//     }

//     // skip leading 0's
//     int i = 0;
//     while (i < num.size() && num[i] == 0) ++i;

//     // transofrm the vector to a string
//     string res = "";
//     while (i < num.size()) res.push_back(num[i++] + '0');
//     return res;
// }
// bool big_mod(string num, ll a)
// {

//     // Initialize result
//     ll res = 0;

//     // One by one process all digits of 'num'
//     for (ll i = 0; i < num.length(); i++)
//         res = (res * 10 + (int)num[i] - '0') % a;

//     if(res == 0) return true;
//     else return false;

// }

// bool isvowel(char ch)
// {
//     return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
// }

// vector<string> subsets(string s)
// {
//     int sz = (1<<s.size());
//     vector<string> ans;
//     for(int mask = 0; mask < sz; mask++)
//     {
//         string subset;
//         for(int bit = 0; bit < s.size(); bit++)
//         {
//             if(mask & (1<<bit))
//                 subset.push_back(s[bit]);
//         }
//         if(subset.size()) ans.push_back(subset);
//     }

//     return ans;
// }

// void unique_number(vi &v)  /// O(nlogn)
// {
//     sort(all(v));   /// O(nlog2(n))

//     int sz = unique(all(v)) - v.begin();  /// O(n)

//     out(sz)
//     f(sz)
//     {
//         cout << v[i] << " ";
//     }

// }

// int Max_vec_element(vi &v)   /// TL -->> O(N)
// {
//     ///for max value
//     iter it = max_element(all(v));
//     //return *it;

//     ///for max value index
//     int n = max_element(all(v))-v.begin();
//     return n;
// }

// int Min_vec_element(vi &v) /// TL -->> O(N)
// {
//     ///for max value
//     iter it = min_element(all(v));
//     return *it;

//     ///for max value index
//     int n = min_element(all(v))-v.begin();
//     //return n;
// }

// ///***SUM BETWEEN TWO NUMBER***/// TL: O(1)
// ll sum_btw(ll a,ll b)
// {
//     if(a>b)
//     {
//         ll temp = a;
//         a = b;
//         b = temp;
//     }
//     ll all = (b-a+1) * (a+b) / 2;
//     //ll forA = (a-1) * (a-1+1) / 2;
//     //ll forB = b*(b+1) / 2;
//     //ll all = forB - forA;

//     return all;
// }
// ll sumof_even_btw(ll a,ll b)
// {
//     ll first =  (a%2 == 0) ? a : a+1;
//     ll x = (b-first+2) / 2;
//     ll even = x*(2*first + (x-1)*2) / 2;

//     return even;
// }

// ll sumof_odd_btw(ll a,ll b)
// {
//     return (sum_btw(a,b) - sumof_even_btw(a,b));
// }
// ////////////////////////////////////////////////

// ll product(ll l, ll r,ll m)
// {
//     ll x = 1;
//     for(int i=l; i<=r; i++)
//     {
//         x = ((x%m)*(i%m)) % m;
//     }

//     return x%m;
// }
// string remove_string_char(string s,char x)
// {
//     s.erase(remove(s.begin(),s.end(),x),s.end());
//     return s;
// }


// bool cmp(pair<int,int> &p1,pair<int,int>&p2)
// {
//     if(p1>p2) return 1;
//     else if(p1==p2) return (p1<p2);
//     return 0;
// }

// string word_cnt_sentence(string sentence)
// {
//     map<string,int>cnt;
//     vector<string>v;

//     string temp;

//     for(auto u : sentence)
//     {
//         if( isspace(u))
//         {
//             v.push_back(temp);
//             temp.clear();
//         }
//         else
//         {
//             temp += u;
//         }
//     }
//     v.push_back(temp);

//     int Max = 0;
//     for(auto c : v)
//     {
//         cnt[c]++;
//         Max = max(Max,cnt[c]);
//     }


//     string k;
//     for(auto c : v)
//     {
//         if(cnt[c] == Max)
//         {
//             k = c;
//             break;
//         }
//     }

//     string MAX = to_string(Max);
//     string opp = k + " " + MAX;
//     return opp;
// }

// /// Binary-search ///
// /// Built-In Fun : binary_search()
// /// without sort : (q * logN)
// /// with sort : (N * logN) + (q * logN)
// void binary_searching()
// {
//     int n,q;
//     c(n)c(q)

//     vector<int>a(n);

//     for(auto &x : a)
//         cin >> x;

//     //sort(all(a));
//     while(q--)
//     {
//         int x;
//         c(x)

//         int l=0,r = n-1;
//         bool found = 0;
//         while(l<=r)
//         {
//             int m = (l+r) / 2;
//             if(a[m] == x)
//             {
//                 found = 1;
//                 break;
//             }
//             else if(x < a[m])
//             {
//                 r = m-1;
//             }
//             else
//             {
//                 l = m+1;
//             }
//         }
//         if(found) ha
//             else na

//             }
// }

// /// lower_bound(all(a),x) - a.begin();
// void lower_bounding()
// {
//     int n,q;
//     c(n)c(q)

//     vector<int>a(n);

//     for(auto &x : a)
//         cin >> x;

//     //sort(all(a));
//     while(q--)
//     {
//         int x;
//         c(x)

//         int l=-1,r = n;
//         bool found = 0;
//         while(l+1<r)
//         {
//             int m = (l+r) / 2;
//             if(x <= a[m])
//             {
//                 r = m;
//             }
//             else
//             {
//                 l = m;
//             }
//         }

//         out(r)
//     }
// }
// /// upper_bound(all(a),x) - a.begin();
// void upper_bounding()
// {
//     int n,q;
//     c(n)c(q)

//     vector<int>a(n);

//     for(auto &x : a)
//         cin >> x;

//     //sort(all(a));
//     while(q--)
//     {
//         int x;
//         c(x)

//         int l=-1,r = n;
//         bool found = 0;
//         while(l+1<r)
//         {
//             int m = (l+r) / 2;
//             if(x <= a[m])
//             {
//                 r = m;
//             }
//             else
//             {
//                 l = m;
//             }
//         }

//         out(r)
//     }
// }

// void sqrt_binary()
// {
//     int x;
//     cin >>x;

//     d l = 0,r =x;
//     // while(fabs(l-r) > eps)
//     for(int i=0; i<100; i++)
//     {
//         d m = (l+r) / 2;
//         if(m*m > x) r = m;
//         else l = m;
//     }

//     cout << setprecision(5) << fixed << l sp endl;
// }

// ll hex_to_dec(string hex)
// {
//     //string hex;
//     ll num,dec=0;
//     ll power = hex.size();
//     for(ll i=0; i<hex.size(); i++)
//     {
//         power--;
//         if(hex[i] >= '0' && hex[i] <= '9')
//             num = hex[i] - 48;
//         else if(hex[i] >= 'a' && hex[i] <= 'f')
//             num = hex[i] - 87;
//         else if(hex[i] >= 'A' && hex[i] <= 'F')
//             num = hex[i] -55;

//         dec += num * pow(16,power);
//     }

//     return dec;
// }
// int n,x,y;
// bool ok(int t)
// {
//     t-=min(x,y);
//     if(t<0) return 0;//We can't even make one single copy in t seconds.
//     return (t/x+t/y+1)>=n;//We add one because we already make a copy.
// }

// void solve()
// {
//     int n,con;
//     c(n)c(con)

//     vector<pair<int,int>> v(con);

//     for(auto &it : v)
//         cin >> it.sc >> it.fi;

//     sort(v.rbegin(),v.rend());

//         ll ans = 0;
//     for(int i=0;i<con;i++)
//     {
//         if(n==0)break;

//         ll k = min(n,v[i].sc);
//         n -= k;
//         ans += k * v[i].fi;
//     }

//     out(ans)
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     solve();

//     return 0;

// }

