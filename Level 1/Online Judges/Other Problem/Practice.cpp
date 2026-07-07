// Sublime Sequence
// time limit per test1 second
// memory limit per test256 megabytes
// Farmer John has an integer 𝑥
// . He creates a sequence of length 𝑛
//  by alternating integers 𝑥
//  and −𝑥
// , starting with 𝑥
// .

// For example, if 𝑛=5
// , the sequence looks like: 𝑥,−𝑥,𝑥,−𝑥,𝑥
// .

// He asks you to find the sum of all integers in the sequence.

// Input
// The first line contains an integer 𝑡
//  (1≤𝑡≤100
// )  — the number of test cases.

// The only line of input for each test case is two integers 𝑥
//  and 𝑛
//  (1≤𝑥,𝑛≤10
// ).

// Output
// For each test case, output the sum of all integers in the sequence.
// //Bruteforce
// #include<iostream>
// using namespace std;
// int main() {
//     int itr;
//     cin >> itr;
//     for(int i = 0; i < itr; i++) {
//         long long x;
//         cin >> x;
//         int n;
//         cin >> n;
//         int sum = x;
//         for(int j = 1; j < n; j++) {
//             if(j % 2 == 0) {
//                 sum = sum + x;
//             }
//             else {
//                 sum = sum - x;
//             }
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x;
        int n;
        cin >> x >> n;
        if(n % 2 == 0) {
            cout << "0" << endl;
        }
        else {
            cout << x << endl;
        }
    }
    return 0;
}