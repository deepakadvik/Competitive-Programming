// Problem : https://codeforces.com/problemset/problem/1761/A
 
#include<bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'
 
void deepSolve() {
    i64 n, a, b;
    cin >> n >> a >> b;

    if(a + b + 2 <= n || (a == b && a == n)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
 
int main() {
    int t; cin >> t;
    while(t--) {
        deepSolve();
    }
    return 0;
}



// Time Complexity : O(1)