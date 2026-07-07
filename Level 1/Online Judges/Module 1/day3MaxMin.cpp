// Max and Min
// time limit per test0.25 seconds
// memory limit per test64 megabytes
// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)
// Output
// Print the minimum number followed by a single space then print the maximum number.

#include<bits/stdc++.h>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int minimum = min(A, min(B, C));
    int maximum = max(A, max(B, C));
    cout << minimum << " " << maximum;
    return 0;
}