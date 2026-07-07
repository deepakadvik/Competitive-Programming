//Print all possible pairs of integers in an array with distinct integers.
#include<bits/stdc++.h>
using namespace std;
int main () {
    int arr[3] = {1, 2, 3};
    for(int i = 0; i <= arr[3]+1; i++)
        for(int j = i; j <= arr[3]+1; j++) {
            cout << "(" << arr[i] << "," << arr[j] << ")";
        }
        return 0;
    }