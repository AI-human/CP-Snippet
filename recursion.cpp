#include <bits/stdc++.h>
using namespace std;

// _______________two ways to count________________
int count1(int i,int &cnt){
    cnt++;
    if(i<5){
        count1(i+1,cnt);
    }
    return cnt;
}
int count2(int i){
    return ((i!=1)?1+count2(i-1):1);
}
// __________________________________________________

// _______2d vector traverse using recursion_____


void printVector(vector<vector<int>>& vec, int row, int col) {
    if (row == vec.size()){
        return;}
    if (col == vec[row].size()) {
        cout << endl;
        printVector(vec, row + 1, 0);
        return;
    }
    cout << vec[row][col] << " ";
    printVector(vec, row, col + 1);
}
void add_2d_vector(vector<vector<int>> &a,vector<vector<int>> &b,int i=0,int j=0){
    if(i==a.size()){    
        return ;
    }
    if(j==a[i].size()){
        cout<<endl;
        add_2d_vector(a,b,i+1,0);
    }
    else{
        cout<<a[i][j]+b[i][j]<<' ';
        add_2d_vector(a,b,i,j+1);
    }

}

// _________________________________
ll fib(int n){
    if(n==1)
        return 0;
    else if( n==2)
        return 1;
    return fib(n-1)+fib(n-2);
}