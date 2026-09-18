/*
*	Created: 15.09.2026 10:04:17 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int x;
    cin>>x;
    cout<<(__builtin_popcount(x))<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
