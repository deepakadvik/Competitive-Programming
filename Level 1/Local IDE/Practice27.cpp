#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[14];
    for(int i = 0; i < 14; i++) {
        a[i] = 0;
    }
    for(int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        a[n]++;
    }
    bool cnt1 = 0, cnt2 = 0;
    //cont1 --> frequency of 2 occure or not
    //cont1 --> frequency of 3 occure or not
    for(int i = 0; i < 14; i++) {
        if(a[i] == 2) {
            cnt1 = 1;
        }
        if(a[i] == 3) {
            cnt2 = 1;
        }
    }

    if(cnt1 == 1 && cnt2 == 1) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}