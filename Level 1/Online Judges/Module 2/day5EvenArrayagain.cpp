// https://codeforces.com/problemset/problem/1367/B
#include<bits/stdc++.h>
using namespace std;
int evenArray() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int notEven = 0, notOdd = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0 && arr[i] % 2 != 0) {
            notEven++;
        }
        if(i % 2 != 0 && arr[i] % 2 != 1) {
            notOdd++;
        }
    }
    if(notOdd != notEven) {
        return -1;
    }
    else {
        return notEven;
    }
}
int main() {
    int test;
    cin >> test;
    while(test--) {
        int output = evenArray();
        cout << output << endl;
    }
    return 0;
}