//https://codeforces.com/problemset/problem/1669/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--) {
        int rating;
        cin >> rating;
        if(rating < 1400) {
            cout << "Division 4" << endl;
        }
        else if(rating < 1600) {
            cout << "Division 3" << endl;
        }
        else if(rating < 1900) {
            cout << "Division 2" << endl;
        }
        else {
            cout << "Division 1" << endl;
        }
    }
    return 0;
}