// Problem : https://codeforces.com/problemset/problem/339/A
 
#include<iostream>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'
 
void deepSolve() {
    string s; cin >> s;
    sort(s.begin(), s.end());

    for(int i = 0; i < s.length() - 1; i++) {
        if(s[i] != '+') {
            cout << s[i] << "+";
        }
    }
    cout << s[s.length() - 1];
}
 
int main() {
        deepSolve();
    return 0;
}