/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

// Leonardo's Prime Factors

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void sieve_prime(ll* p, ll n){

    p[2] = 1;
    for(ll i = 3; i <= n; i += 2){
        p[i] = 1;
    }

    for(ll i=3; i <= n; i += 2){
        if(p[i] == 1){
            for(ll j=i*i; j <= n; j+=i){
                p[j] = 0;
            }
        }
    }
}


 
int leonardo_prime(ll* p, ll n){
    
    ll f = 1; 
    int c = 0;
    for (ll i = 1; i <= n; i++)
    {
        if(p[i] == 1 && n%i == 0){
            f *= (i);
            c++;
        }
    }
    if(f>n)return c-1;
    else return c;
}

int main(){

    ios :: sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;

    while(q--){
        ll n;
        cin >> n;

        ll* primes = NULL;
        primes = new ll[n+1];
        memset(primes, 0, (n+1)*sizeof(ll));
        
        sieve_prime(primes, n);

        for (ll i = 0; i <= n; i++) {
            // if(primes[i])
            cout << primes[i] << ", ";
        }
        
        cout << leonardo_prime(primes, n) << endl;
    }

    return 0;
}