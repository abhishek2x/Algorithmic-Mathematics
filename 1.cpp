/*!
* Copyright (c) 2020 Abhishek Srivastava
*/
// Find the Point
#include <bits/stdc++.h>
using namespace std;

int main(){

    ios :: sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << (x2-x1)+x2 << " " << (y2-y1)+y2;
        cout << endl;
    }
    return 0;
}