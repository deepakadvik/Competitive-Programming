// Take input of 3 numbers x, y, z and output the maximum
// using if statements.
#include<iostream>
using namespace std;
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if(x > y & x >z) {
        cout << "Maximum is : " << x;
    }
    else{
        if(y > z) {
            cout << "Maximum is : " << y;
        }
        else {
            cout << "Maximum is : " << z;
        }
    }
    return 0;
}