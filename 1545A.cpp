/*
*	Created: 23.09.2026 12:44:37 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b = a;
    sort(b.begin(),b.end());

    vector<pair<int,int>> original;
    vector<pair<int,int>> target;

    for(int i=0;i<n;i++){
        original.push_back({a[i],i%2});
        target.push_back({b[i],i%2});
    }
    sort(original.begin(),original.end());
    sort(target.begin(),target.end());
    if(original == target){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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
