#include<iostream>
using namespace std;
void isDivisible(long long a, long long b, long long k) {
    if(a % k == 0) {
        if( b % k == 0) {
            cout << "Both";
        }
        else {
            cout <<"Memo";
        }
    }
    else {
        if(b % k == 0) {
            cout << "Momo";
        }
        else {
            cout << "No One";
        }
    }
}
int main() {
    long long a, b, k;
    cin >> a >> b >> k;
    isDivisible(a, b, k);
    return 0;
}