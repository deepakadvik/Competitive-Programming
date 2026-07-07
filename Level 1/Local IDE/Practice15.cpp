// https://codeforces.com/problemset/problem/1/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);

    long long n, m, a;
    cin >> n >> m >> a;
    // ⌈n/a​⌉ can be written as (n + a - 1) / a
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;
    return 0;
}