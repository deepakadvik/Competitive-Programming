// https://codeforces.com/problemset/problem/281/A
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string word;
    cin >> word;
    cout << char(toupper(word[0])) << word.substr(1);;
    return 0;
}