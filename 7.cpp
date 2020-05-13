/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
// Connecting Towns

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    long int q;
    cin >> q;
    while(q--){
        ll n; cin >> n;
        
        ll* a = NULL;
        a = new ll[n-1];

        for (ll i = 0; i < n-1; i++) {
            cin >> a[i];
        }

        ll res = 1;
        for (ll i = 0; i < n-1; i++) {
            res = (res*a[i])%1234567;
        }
        cout << res << endl;
    }

    return 0;
}