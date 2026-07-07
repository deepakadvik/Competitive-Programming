// https://codeforces.com/contest/1777/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int k = 0, totalOps = 0;
        for(int i = 0; i < n; i++) {
        if(i == 0 || a[i-1] % 2 == a[i] % 2) {
            k++;
        }
        else {
            totalOps += k-1;
            k = 1;
        }
    }
    totalOps += k-1;
    cout  << totalOps << endl;
    }
    return 0;
}