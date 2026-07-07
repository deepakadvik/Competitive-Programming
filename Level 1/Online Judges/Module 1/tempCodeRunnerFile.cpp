// Even, Odd, Positive and Negative
// time limit per test1 second
// memory limit per test256 megabytes
// Given N numbers. Count how many of these values are even, odd, positive and negative.

// Input
// First line contains one number N (1 ≤ N ≤ 103) number of values.

// Second line contains N numbers (-105 ≤ Xi ≤ 105).

// Output
// Print four lines with the following format:

// First Line: "Even: X", where X is the number of even numbers in the given input.

// Second Line: "Odd: X", where X is the number of odd numbers in the given input.

// Third Line: "Positive: X", where X is the number of positive numbers in the given input.

// Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; i++) {
        cin >> N;
    }
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    for(int i = 0; i < N; i++) {
        if(N % 2 == 0) {
            cout << "Even: " << a;
            if(N > 0) {
                cout << "Positive: " << b;
            }
            else {
                cout << "Negative: " << c;
            }
        }
        else {
            cout << "Odd: " << d;
            if(N > 0) {
                cout << "Positive: " << b;
            }
            else {
                cout << "Negative: " << c;
            }  
        }
    }
    return 0;
}