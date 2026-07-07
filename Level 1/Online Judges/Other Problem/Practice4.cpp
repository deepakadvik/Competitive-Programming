//https://codeforces.com/problemset/problem/1987/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while(test--) {
        long long n, k;
        cin >> n >> k;
        cout << 1 + (n - 1) * k << endl;
    }
    return 0;
}