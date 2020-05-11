/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    long double a, b;
    cin >> b >> a;
    long double r = ceil((2*a)/b);
    cout << setprecision(0) << fixed <<  r << "\n";

    return 0;
}