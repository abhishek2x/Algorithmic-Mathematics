/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

// 6 test cases failed

#include <bits/stdc++.h>
using namespace std;

int giveMinPts(int a, int b){

    // both are even
    if(a%2 == 0 && b%2 == 0){
        return ((a*b)/4);
    }

    // both are odd
    if(a%2 == 1 && b%2 == 1 && a == b){
        int ans = 0;
        ans += giveMinPts(a-1, b-1);
        int left = (a*2) - 1;
        ans += left/2;
        left = left % 2;
        ans += left;
        return ans;
    }
    
    // one is odd and one is even
    int sm = (a<=b)?a:b;
    int lg = (a>=b)?a:b;
    int ans = 0;

    ans += (sm*sm)/4;
    long int left = (sm*lg)-(ans*4);

    ans += (left/2);
    left = left%2;
    ans+= left;
    return ans;

}

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    
    cout << giveMinPts(n, m);
    return 0;
}   