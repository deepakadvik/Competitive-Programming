// Problem : https://codeforces.com/problemset/problem/1845/A
 
#include<bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'
 
void deepSolve() {
    int n, k, x;
    cin >> n >> k >> x;

    if(x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for(int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else {
        if(k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            if(n % 2 == 0) {
                cout << n / 2 << endl;
                for(int i = 0; i < n / 2; i++) {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else {
                cout << (n - 3) / 2 + 1 << endl;
                for(int i = 0; i < (n - 3) / 2; i++) {
                    cout << 2 << " ";
                }
                cout << 3 << endl;
            }
        }
    }
}
 
int main() {
    int test; cin >> test;
    while(test--) {
        deepSolve();
    }
    return 0;
}


// Time Complexity : O(n) == O(100)
// Space Complexity : O(1)