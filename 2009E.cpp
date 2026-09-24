/*
*	Created: 23.09.2026 11:41:17 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

#define int long long
int prefixSum(int i,int k){
    return (i)*(2*k+i-1)/2;
}
void solve(){
    int n,k;
    cin>>n>>k;
    // total sum of. : k,k+1...k+n-1 = (n*k) + (0+1+2+...+(n-1)) = (n*k) + (n*(n-1))/2
    int total = prefixSum(n,k);
    int left = 1;
    int right = n;
    while(left < right){
        int mid = (left+right)/2;
        int pref = prefixSum(mid,k);

        // Check if the sum of the first 'mid' elements is at least half of the total sum
        if(2*pref >= total){
            right = mid;
        }else{
            left = mid+1;
        }
    }
    int i = left;
    int pref = prefixSum(i,k);
    int ans = abs(2*pref - total);
    if(i > 1){
        pref = prefixSum(i-1,k);
        ans = min(ans,abs(2*pref - total));
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
