// Problem : https://codeforces.com/problemset/problem/546/A
 
#include<bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'
 
void deepSolve() {
    i64 k, n, w;
    cin >> k >> n >> w;
    i64 totalDollars = (k * w * (w + 1)) / 2;
    i64 borrowDollars = totalDollars - n;
    if(borrowDollars < 0) {
        cout << 0 << endl;
    }
    else {
        cout << borrowDollars << endl;
    }
}
 
int main() {
    // int test; cin >> test;
    // while(test--) {
        deepSolve();
    // }
    return 0;
}