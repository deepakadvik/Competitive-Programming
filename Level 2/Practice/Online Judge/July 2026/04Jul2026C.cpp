// Problem : https://codeforces.com/problemset/problem/977/A
 
#include<bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'
 
void deepSolve() {
    i64 n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        if(n % 10 == 0) {
            n /= 10;
        }
        else {
            n -= 1;
        }
    }
    cout << n << endl;
}
 
int main() {
    // int test; cin >> test;
    // while(test--) {
        deepSolve();
    // }
    return 0;
}