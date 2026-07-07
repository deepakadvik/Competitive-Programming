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
    int n;
    cin >> n;
    int a[n];
    //Input Numbers
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //Check
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    for(int i = 0; i < n; i++) {
        //Even or Odd
        if(a[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }

        //Positive or Negative
        if(a[i] > 0) {
            positive++;
        }
        else if(a[i] < 0) {
            negative++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    return 0;
}