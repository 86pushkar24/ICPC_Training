/*
*	Created: 30.09.2026 12:32:48 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
#define int long long
#define MOD 1000000007

int binaryExponentiation(int base,int power){
    int res=1;
    while(power>0){
        if(power&1) res*=base; // if power is odd, multiply the result with base
        res%=MOD;
        base*=base; // square the base
        base%=MOD;
        power>>=1; // divide the power by 2
    }
    return res;
}


void solve(){
    int a,b;
    cin>>a>>b;
    cout << binaryExponentiation(a,b) << "\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
