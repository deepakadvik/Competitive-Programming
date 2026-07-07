//https://codeforces.com/problemset/problem/1692/A
#include<bits/stdc++.h>
using namespace std;
void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int count = (b > a) + (c > a) + (d > a);
    cout << count << endl;
}
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--) {
        solve();
    }
    return 0;
}