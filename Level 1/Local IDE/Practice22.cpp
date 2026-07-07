#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long n, a;
    cin >> n >> a;
    int arr[n];

    for(int i = 0; i <= n; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i++) {
        for(int j = i+1; j <= n; j++) {
            if(arr[j] == 0) {
                continue;
            }
            else {
                arr[j]--;
            }
        }
    }

}
int main() {
    ios::sync_with_stdio(false);// remove the sync b/w c & c++
    cin.tie(Null); // removes the sync b/w input and output
    //Code
    int test;
    cin >> test;
    while(test--) {
        solve();
    }
    return 0;
}