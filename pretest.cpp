#include <bits/stdc++.h>
using namespace std;

int main(){
	std::vector<int> a = {1,2,3,4};

	reverse(a.begin()+1,a.begin()+3);
	for(int i=0;i<4;i++){
		cout<<a[i]<<' ';
	}
}