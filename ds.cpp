#include <bits/stdc++.h>
using namespace std;


int main(){

  // priority_queue O(log n)
  priority_queue<int> pq;
  pq.push(4);
  pq.push(10);
  pq.push(1000000);
  while(!pq.empty()){
      cout<<pq.top()<<' '; // prints -> 1000000 10 4
      pq.pop();
  }
  //-----------end-----------

  // unordered set
}
