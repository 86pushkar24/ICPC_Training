/*
*	Created: 17.09.2026 09:40:48 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // need all bits that appeared so far
    int required = 0;
    for(int i=0;i<n;i++){
        // bits that should be present forever
        required |= a[i];
        // present in required but missing in a[i]
        int missing = required ^ a[i];
        cout<<missing<<" ";
    }
    cout<<"\n";
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
