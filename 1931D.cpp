/*
*	Created: 02.10.2026 12:41:25 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<pair<int,int>,int> mp;
    int ans=0;
    for(int it : a){
        int rx = it%x;
        int ry = it%y;
        int needX = (x-rx)%x;
        int needY = ry;
        ans += mp[{needX,needY}];
        mp[{rx,ry}]++;
    }
    cout<<ans<<"\n";
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
