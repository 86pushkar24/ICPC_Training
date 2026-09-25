/*
*	Created: 24.09.2026 10:33:16 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
#define int long long
void solve(){
    int n,c;
    cin>>n>>c;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }   
    vector<int> firstCost(n+1),cheapCost(n+1);
    vector<pair<int,int>> portals;
    for(int i=1;i<=n;i++){
        firstCost[i]=a[i]+i;
        cheapCost[i]=a[i]+min(i,n-i+1);
        portals.push_back({cheapCost[i],i});
    }
    // sort asceding 
    sort(portals.begin(),portals.end());
    // pref[k] = sum of k cheapest portals
    vector<long long> pref(n+1,0);
    vector<int> rank(n+1);
    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+portals[i].first;
        rank[portals[i].second]=i+1;
    }
    int ans=0;
    //try everty portal as first portal
    for(int i=1;i<=n;i++){
        if(firstCost[i]>c) continue;
        int lo=0,hi=n-1;
        int best=0;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int extracost;
            if(rank[i]>mid)extracost=pref[mid];
            else extracost=pref[mid+1]-cheapCost[i];
            int totalCost=firstCost[i]+extracost;
            if(totalCost<=c){
                best=mid;
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        ans=max(ans,best+1);
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
