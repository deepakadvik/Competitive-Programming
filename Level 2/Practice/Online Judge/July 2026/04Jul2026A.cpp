// Problem : https://codeforces.com/problemset/problem/791/A
 
#include<iostream>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'
 
void deepSolve() {
    int a, b; cin >> a >> b;
    int count = 0;
    while(a <= b) {
        a *= 3; b *= 2;
        count++;
    }
    cout << count << endl;
}
 
int main() {
    // int test; cin >> test;
    // while(test--) {
        deepSolve();
    // }
    return 0;
}