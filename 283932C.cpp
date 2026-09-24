/*
*	Created: 21.09.2026 12:11:58 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
#define int long long
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    int firstTime = min(x,y);
    int remaining = n-1;
    int left = -1 , right = firstTime*remaining;
    while(right - left > 1){
        int mid = (left+right)/2;
        int copies = mid/x + mid/y;
        if(copies >= remaining){
            right = mid;
        }else{
            left = mid;
        }
    }
    cout<<firstTime + right<<"\n";
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
