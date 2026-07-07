// Given someone’s age, tell whether they are a child, adult, or a senior citizen.
// 0 - 17 : Child
// 18 - 64 : Adult
// 65 + : Senior Citizen
#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cin >> age;
    if(age >= 0 && age <= 17) {
        cout << "Child";
    }
    else if (age <= 64) {
        cout << "Adult";
    }
    else {
        cout << "Senior Citizen";
    }
    return 0;
}