#include <bits/stdc++.h>
using namespace std;

// some greedy technique
/*
  Two things in greedy 
  1. maximization 
  2. minimazation 
  getting optimal solution is goal of greedy  
  if O(N) then greedy or bruteforce
*/

//
void maxmization()
{
  long long n, cnt = 0, mx = 0;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    if (1)// write algo by given in description
    {
      cnt++;
    }
    else
    {
      mx = max(cnt, mx);
      cnt = 0;
    }
  }
}