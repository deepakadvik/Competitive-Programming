// Problem : https://codeforces.com/contest/2241/problem/C
 
#include<iostream>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'
 
void deepSolve() {
    int n; cin >> n;
    string s; cin >> s;
    
    int lot = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i - 1]) {
            lot ++;
        }
    }
    
    int minLength = 1;
    if(lot == 2) {
        minLength = 2;
    }
    cout << minLength << endl;
}
 
int main() {
    int test; cin >> test;
    while(test--) {
        deepSolve();
    }
    return 0;
}