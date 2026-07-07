// Comparison
// time limit per test1 second
// memory limit per test256 megabytes
// Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.

// The comparison is as follows: A < B, A > B, A = B.

// Where A, B are two integer numbers and S refers to the sign between them.

// Input
// Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100), S can be ('<', '>','=') without the quotes.

// Output
// Print "Right" if the comparison is true, "Wrong" otherwise.
#include<iostream>
using namespace std;
int main() {
    int num1, num2;
    char opr;
    cin >> num1 >>opr >> num2;

    switch (opr)
    {
    case '>':
        if(num1 > num2) {
            cout << "Right";
        }
        else {
            cout << "Wrong";
        }
        break;
    case '<':
    if(num1 < num2) {
            cout << "Right";
        }
        else {
            cout << "Wrong";
        }
        break;
    case '=':
    if(num1 == num2) {
            cout << "Right";
        }
        else {
            cout << "Wrong";
        }
        break;
    
    default:
        cout << "Wrong";
    }
    return 0;
}