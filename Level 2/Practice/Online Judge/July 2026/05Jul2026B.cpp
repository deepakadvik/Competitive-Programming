// Problem : https://codeforces.com/problemset/problem/1766/A
 
#include<iostream>
#include<vector>
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define endl '\n'

bool check(i64 x) { //O(6)
    i64 countOfDigits = 0;
    i64 countOfZeros = 0;
    while(x) {
        if(x % 10 == 0) {
            countOfZeros++;
        }
        countOfDigits++;
        x /= 10;
    }
    return countOfZeros == countOfDigits - 1;
}

vector<i64> round_nums;
void precompute() {
    for(int i = 1; i <= 999999; i++) {
        if(check(i) == true) {
            round_nums.push_back(i);
        }
    }
}


void deepSolve() {
    i64 n; cin >> n;
    i64 answer = 0;
    for(int i = 0; i < round_nums.size(); i++) {
        if(round_nums[i] <= n) {
            answer++;
        }
        else {
            break;
        }
    }
    cout << answer << endl;
}
 
int main() {
    precompute();
    int test; cin >> test;
    while(test--) {
        deepSolve();
    }
    return 0;
}