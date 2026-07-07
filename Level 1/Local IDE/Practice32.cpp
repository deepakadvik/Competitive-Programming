#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);

    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;

        int arr[n+1];
        for(int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        long long countZero = 0;
        long long sum = 0;
        bool flag = false;

        for(int i = 1; i <= n-1; i++) {
            sum += arr[i];
            if(arr[i] > 0) {
                flag = true;
            }
            if(arr[i] == 0 && flag == true) {
                countZero++;
            }
        }
        cout << sum + countZero << endl;
    }
    return 0;
}