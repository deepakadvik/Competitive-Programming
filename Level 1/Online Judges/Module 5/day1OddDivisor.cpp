#include<bits/stdc++.h>
using namespace std;
int solve() {
    long long n;
    cin >> n;
    if(n % 2 != 0) {
        cout << "YES" << endl;
        return 0;
    }
    // If n is even, check if it's a power of 2 --> No odd divisors
    // If n & (n - 1) == 0 => power of 2
    // Otherwis --> Odd divisors
    if((n & (n-1)) == 0) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    return 0;
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        solve();
    }
    return 0;
}