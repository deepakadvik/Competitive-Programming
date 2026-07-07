#include <bits/stdc++.h>
using namespace std;

bool is_Prime(long long n) {
    if(n == 1) return false;
    for(long long i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

void solve() {
    long long a, b;
    cin >> a >> b;
    if((a - b == 1) && is_Prime(a + b)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO3" << endl;
    }
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        solve();
    }
}
