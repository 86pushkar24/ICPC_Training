/*
*	Created: 01.10.2026 10:10:29 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    int ans=0;
    int len=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp<=q){
            len++;
            // len = 3 , k = 2, ans += (3-2+1) = 2, subarrays are [1,2], [2,3] : [1,2,3] 
            if(len>=k) ans += (len-k+1); // no of subarrays of length k in a segment of length len is (len-k+1)
        }else{
            len=0; // face the wall
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
