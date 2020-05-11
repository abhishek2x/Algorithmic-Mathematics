/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int Pans(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    else {
        return n + Pans(n-1);
    }
}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << Pans(n-1) << endl;
    }
    return 0;
}