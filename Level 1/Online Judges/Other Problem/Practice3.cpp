//https://codeforces.com/contest/1901/problem/A
#include<bits/stdc++.h>
using namespace std;
long long is_Posible(long long x, long long y, long long z) {
    if(y % 2 == z % 2) {
        return 1;
    }
    return 0;
}
void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    int ans[3] = {0, 0, 0};
    ans[0] = is_Posible(a, b, c);
    ans[1] = is_Posible(b, c, a);
    ans[2] = is_Posible(c, a, b);
    for(int i = 0; i < 3; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main() {
    int test;
    cin >> test;
    while(test --) {
        solve();
    }
    return 0;
}