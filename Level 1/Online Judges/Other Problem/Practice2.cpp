//https://codeforces.com/contest/1900/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int flag = 0;
    int count_Of_Empty = 0;
    int current_Count_Of_Empty = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '.') {
            current_Count_Of_Empty++;
        }
        else {
            count_Of_Empty += current_Count_Of_Empty;
            if(current_Count_Of_Empty >= 3) {
                flag = 1;
            }
            current_Count_Of_Empty = 0;
        }
    }
    count_Of_Empty += current_Count_Of_Empty;
    if(current_Count_Of_Empty >= 3) {
        flag = 1;
    }
    if(flag) {
        cout << 2 << endl;
    }
    else {
        cout << count_Of_Empty << endl;
    }
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        solve();
    }
    return 0;
}