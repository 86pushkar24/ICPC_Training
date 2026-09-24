/*
*	Created: 23.09.2026 13:15:23 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> points(n);
    for(int i=0;i<n;i++){
        cin>>points[i].first;
        points[i].second = i;
    }
    sort(points.begin(),points.end());
    vector<int> pre(n+1,0);
    for(int i=0;i<n;i++){
        pre[i+1] = pre[i] + points[i].first;
    }
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        int x = points[i].first;
        // left contribution
        int left = x*i - pre[i];
        // right contribution
        int rightsum = pre[n] - pre[i+1];
        int right = rightsum - x*(n-i-1);
        int res = left + right + n;
        ans[points[i].second] = res;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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
