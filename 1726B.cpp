/*
*	Created: 17.09.2026 10:16:41 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    if(m<n){
        cout<<"NO\n";
        return;
    }
    if(n%2==0 && m%2==1){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    // n is odd
    if(n%2==1){
        for(int i=0;i<n-1;i++){
            cout<<"1 ";
        }
        cout<<(m-n+1)<<"\n";
    }
    else{ // n is even
        for(int i=0;i<n-2;i++){
            cout<<"1 ";
        }
        cout<<((m-n+2)/2)<<" "<<((m-n+2)/2)<<"\n";
    }
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
