/*
*	Created: 22.09.2026 09:53:13 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,d;
    cin>>n>>d;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 0;
    // fix x[i] as leftmost pt of triplet
    for(int i=0;i<n;i++){
        // find the rightmost pt of triplet
        int j = upper_bound(a.begin(),a.end(),a[i]+d) - a.begin();
        // number of pts between i and j is (j-i-1)
        int pts = j-i-1;
        if(pts >= 2){
            // choose 2 pts from pts
            ans += (pts*(pts-1))/2;
        }
    }
    cout<<ans<<"\n";
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
