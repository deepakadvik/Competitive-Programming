#include <bits/stdc++.h>
using namespace std;
int main() {
    int c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int j = 0;
        for (int k = 0; k < n; k++) {
            if (s[k] == t[k]) {
                j++;
            }
        }

        if (n == j) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
