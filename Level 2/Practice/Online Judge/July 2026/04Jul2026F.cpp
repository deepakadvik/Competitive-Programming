// Problem : https://codeforces.com/problemset/problem/467/A
 
#include<bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'
 
void deepSolve() {
    int n; cin >> n;
    int count = 0;
    while(n--) {
        int p, q; cin >> p >> q;
        if(q - p >= 2) {
            count++;
        }
    }
    cout << count << endl;
}
 
int main() {
        deepSolve();
    return 0;
}