// Problem : https://codeforces.com/problemset/problem/734/A
 
#include<bits/stdc++.h>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'
 
void deepSolve() {
    int n; cin >> n;
    string s; cin >> s;
    int ScoreA = 0, ScoreD = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'A') {
            ScoreA++;
        }
        else {
            ScoreD++;
        }
    }
    if(ScoreA == ScoreD) {
        cout << "Friendship" << endl;
    }
    else if(ScoreA > ScoreD) {
        cout << "Anton" << endl;
    }
    else {
        cout << "Danik" << endl;
    }
}
 
int main() {
    // int test; cin >> test;
    // while(test--) {
        deepSolve();
    // }
    return 0;
}