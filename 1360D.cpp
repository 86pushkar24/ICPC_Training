/*
*	Created: 30.09.2026 13:00:47 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin>>n>>k;
    int best=1;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            int d1=i;
            int d2=n/i;
            if(d1<=k) best=max(best,d1);
            if(d2<=k) best=max(best,d2);
        }
    }
    cout<<n/best<<"\n";
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
