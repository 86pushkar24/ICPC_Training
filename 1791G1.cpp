/*
*	Created: 24.09.2026 09:39:08 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,c;
    cin>>n>>c;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> costs(n);
    for(int i=0;i<n;i++){
        costs[i]=a[i]+(i+1);
    }
    sort(costs.begin(),costs.end());
    int spent=0,ans=0;
    for(int i=0;i<n;i++){
        if(spent+costs[i]<=c){
            spent+=costs[i];
            ans++;
        }
        else{
            break;
        }
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
