/*
*	Created: 02.10.2026 12:07:45 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    int cnt0, cnt1;
    cnt0=cnt1=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0) cnt0++;
        else if(x==1) cnt1++;
    }
    int zeroChoices=1;
    for(int i=1;i<=cnt0;i++){
        zeroChoices=(zeroChoices*2)%1000000007;
    }
    int ans = (zeroChoices*cnt1)%1000000007;
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
