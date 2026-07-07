#include<bits/stdc++.h>
using namespace std;
// void maximumGCD() { //Time Complexity : O(n^2)
//     int n;
//     cin >> n;
//     int ans = -1;
//     for(int a = 1; a <= n/2; a++) {
//         for(int b = a + 1; b <= n; b++) {
//             ans = max(ans, gcd(a, b));
//         }
//     }
//     cout << ans << endl;
// }
void maximumGCD() {
    int n;
    cin >> n;
    cout << n/2 << endl;
}
int main() {
    int test;
    cin >> test;
    while(test--) {
        maximumGCD();
    }
    return 0;
}