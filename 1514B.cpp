/*
*	Created: 15.09.2026 10:37:33 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
long long mod=1e9+7;
long long binpow(long long a,long long b,long long m){
    a%=m;
    long long res=1;
    while(b>0){
        if(b&1)
            res=res*a%m;
        a=a*a%m;
        b>>=1;
    }
    return res;
}

void solve(){
    int n,k;
    cin>>n>>k;
    cout<<(binpow(n,k,mod))<<"\n"; // O(log b) 
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
