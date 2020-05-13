/*!
* Copyright (c) 2020 Abhishek Srivastava
*/
// Cutting Paper Squares
// https://medium.com/i-math/why-does-the-euclidean-algorithm-work-aaf43bd3288e
#include <bits/stdc++.h>
using namespace std;

int ans = 0;


int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    
    int ans = 1;
    int gr = (a>=b)?a:b;
    int sm = (a>=b)?b:a;
    while (gr%sm != 0)
    {
        if(a >= b){
            a = a%b;
            sm = a;
            gr = b;
        } else{
            sm = b;
            gr = a;
            b = b%a;
        }
        ans++;
    }
    
    
    cout << ans+1 << endl; 

    return 0;
}