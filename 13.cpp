/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

// Sherlock and the moving tiles

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    ll l,s1, s2;
    cin >> l >> s1 >> s2;
    
    ll Q;
    cin >> Q;

    ll velocity = abs(s2-s1);
    ld mainDiag = l*sqrt(2);
    
    while(Q--){
        ll s_area;
        cin >> s_area;

        ld smDiag = sqrt(s_area)*sqrt(2);
        ld time = (mainDiag - smDiag)/velocity;

        cout << fixed << setprecision(4) << time << endl;
    }

    return 0;
}
