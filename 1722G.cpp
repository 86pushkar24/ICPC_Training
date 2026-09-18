/*
*	Created: 18.09.2026 10:53:19 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> ans(n);
    int xr = 0;
    for(int i=0;i<n-3;i++){
        ans.push_back(i);
        xr ^= i;
    }
    int p = 1 << 20;
    int q = 1 << 21;
    int r = xr ^ p ^ q;
    ans.push_back(p);
    ans.push_back(q);
    ans.push_back(r);
    for(int x : ans) cout<<x<<" ";
    cout<<"\n";
}

// two disjoint groups = equal XOR
// Xor both sides
// condition gets collpased to xor of all elements = 0

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
