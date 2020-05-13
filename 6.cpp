/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int n, m, k;
    cin>>n>>m;
    
    k=((n/2)+(n%2))*((m/2)+(m%2));
    cout<<k<<endl;

    return 0;
}