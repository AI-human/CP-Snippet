#include <bits/stdc++.h>
using namespace std;
#define ll long long

string binaryfy(ll num)    {
 
    if(!num)    return "0";
 
    string a;
 
    while(num)    {
 
        if(num % 2)   a += '1';
        else    a += '0';
 
        num /= 2;
    }
 
    reverse(a.begin(), a.end());
 
    return a;
}
