#include<bits/stdc++.h>
using namespace std;

void blankSpace() {
    int n;
    cin >> n;
    vector<int> a(n);

    int ans = 0, count = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0) {
            count++;
            ans = max(ans, count);
        }
        else {
            count = 0;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);// remove the sync b/w c & c++
    int test;
    cin >> test;
    while(test--) {
        blankSpace();
    }
    return 0;
}