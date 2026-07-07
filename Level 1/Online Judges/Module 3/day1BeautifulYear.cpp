#include<bits/stdc++.h>
using namespace std;
void beautifulYear() {
    int y;
    cin >> y;
    
    for(int i = y+1; i < 10000; i++) {
        int freq[10]; // Store the freq of every digit

        // for(int j = 0; j < 10; j++) {
        //     freq[j] = 0;
        // }
        memset(freq, 0, sizeof(freq));
        int year = i;
        while(year > 0) {
            int a = year % 10;
            freq[a]++;
            year /= 10;
        }
        int flag = 0;
        for(int k = 0; k < 10; k++){
            if(freq[k] > 1){
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
        cout << i << endl;
        break;
        }
    }
}
int main() {
    beautifulYear();
    return 0;
}