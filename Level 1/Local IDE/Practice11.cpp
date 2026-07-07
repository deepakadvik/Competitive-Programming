//Inverted Lower Pyramid
#include<iostream>
using namespace std;
void part1(int n) {
    for(int i = 0; i < n-1; i++) {
        //Space
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        //Star
        for(int j = 0; j < 2*(n-i)-1; j++) {
            cout << "*";
        }
        //Space
        for(int j = 0; j <= i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void part2 (int n) {
    for(int i = 0; i< n; i++) {
        //Space
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        //Star
        for(int j = 0; j < 2*i+1; j++) {
            cout << "*";
        }
        //Space
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    part1(n);
    part2(n);
    return 0;
}