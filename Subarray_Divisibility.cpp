/*
*	Created: 03.09.2026 10:01:04 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    vector<int> cnt(n,0);
    cnt[0] = 1;
    int prefix = 0;
    int answer = 0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        prefix += x;
        int rem = ((prefix%n)+n)%n; // to handle negative prefix sum
        answer += cnt[rem];
        cnt[rem]++;
    }
    cout<<answer<<"\n";
}
// TC : O(n) SC : O(n)

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
