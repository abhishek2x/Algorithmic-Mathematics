/*!
* Copyright (c) 2020 Abhishek Srivastava
*/


// Summing the N series
// All cases passed
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    
    while(T--){
        unsigned long long int n;
        cin >> n;
        unsigned long long int k;
        k  = ((n%1000000007)*(n%1000000007))%1000000007;
        cout << k << endl;
    }

    return 0;
}