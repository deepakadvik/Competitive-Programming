#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);

    int test;
    cin >> test;
    while(test--) {
        int n, H, M;
        cin >> n >> H >> M;
        int sleep_Time = H * 60 + M;
        int ans = 1e7;

        for(int i = 0; i < n; i++) {
            int hour_i, min_i;
            cin >> hour_i >> min_i;
            int alarm_Time = hour_i * 60 + min_i;
            int diff = alarm_Time - sleep_Time;
            if(diff < 0) {
                diff += 24 * 60;
            }
            ans = min(ans, diff);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
}