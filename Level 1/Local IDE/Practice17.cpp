// https://codeforces.com/contest/2171/problem/A
#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    if(n % 2 == 1) {
        cout << 0 << endl;
    }
    else {
        cout << n/4 + 1 << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while(test--) {
        solve();
    }
    return 0;
}