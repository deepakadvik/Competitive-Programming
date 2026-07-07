//https://codeforces.com/contest/758/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // Find Richest
    int richest = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > richest) {
            richest = a[i];
        }
    }
    //Calculate Sum
    int min_burles = 0;
    for(int i = 0; i < n; i++) {
        int burles_to_ith_citizen = richest - a[i];
        min_burles += burles_to_ith_citizen;
    }
    cout << min_burles << endl;
    return 0;
}