// https://codeforces.com/problemset/problem/1367/B
#include<bits/stdc++.h>
using namespace std;
int evenArray() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int countEven = 0;
    int misplaceValue = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0){
            countEven++;
        }
        if(i%2==0 && arr[i]%2!=0){
            misplaceValue++;
        }
    }
    if(n % 2 == 0 && countEven!=n/2) {
        return -1;
    }
    else if(n%2!=0 && countEven!=(n/2)+1){
        return -1;
    }
    return misplaceValue;
}
int main() {
    int test;
    cin >> test;
    while(test--) {
        int x = evenArray();
        cout << x << endl;
    }
    return 0;
}