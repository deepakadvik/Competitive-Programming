// https://codeforces.com/problemset/problem/344/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string magnet[n];
    for(int i = 0; i < n; i++) {
        cin >> magnet[i];
    }
    int group = 1;
    for(int i = 1; i < n; i++) {
        if(magnet[i] != magnet[i-1]) {
            group++;
        }
    }
    cout << group;
    return 0;
}