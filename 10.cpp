/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

// Summing the N series
// TLE
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sum = 0;

int Ans(int n, int k){
    if(n == k-1){
        return 1;
        sum += 1;
    }
    
    ll term = ((k*k)&7000000000) - ((k-1)*(k-1)%7000000000);
    // cout << term << " ";
    sum += term;
    return term + Ans(n, k+1);
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int q;cin >> q;
    while (q--) {
        sum = 0;
        ll n;cin >> n;
        int p = Ans(n, 1);
        cout << sum << endl;
    }
    
    return 0;
}