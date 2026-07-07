#include<bits/stdc++.h>
using namespace std;
void mirrorGrid() {
    int n;
    cin >> n;
    string mat[n];
    for(int i = 0; i < n; i++) {
        cin >> mat[i];
    }

    //Finding the area we need to check
    int x = n/2, y = n/2;
    if(n % 2 != 0) {
        y++;
    }

    // Checking and updating the answer
    int ans = 0;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            int ones = 0;
            ones += mat[i][j] - '0';
            ones += mat[j][n-i-1] - '0';
            ones += mat[n-i-1][n-j-1] - '0';
            ones += mat[n-j-1][i] - '0';

            if(ones == 2) {
                ans += 2;
            }
            else if(ones == 1 || ones == 3) {
                ans += 1;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        mirrorGrid();
    }
    return 0;
}