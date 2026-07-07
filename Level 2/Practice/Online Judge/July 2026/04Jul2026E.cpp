// Problem : https://codeforces.com/problemset/problem/1834/A
 
#include<bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'
 
void deepSolve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int one = 0;
    for(int i = 0; i< n; i++) {
        if(a[i] == 1) {
            one++;
        }
    }
    int minusOne = n - one;
    int ans = 0;
    
    while(one < minusOne) {
        one++; minusOne--; ans++;
    }
    if(minusOne % 2) {
        ans++;
    }
    cout << ans << endl;
}

int main() {
    int test; cin >> test;
    while(test--) {
        deepSolve();
    }
    return 0;
}