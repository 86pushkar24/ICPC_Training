/*
*	Created: 25.09.2026 10:02:36 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> freq(n+2,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=n+1)freq[a[i]]++;
    }
    int mex=0;
    while(freq[mex]>0)mex++;
    // case 1: mex+1 is absent in the array
    if(freq[mex+1]==0){
        if(mex<n)cout<<"Yes\n";
        else cout<<"No\n";
        return;
    }
    // case 2: mex+1 is present in the array
    int l=-1,r=-1;
    for(int i=0;i<n;i++){
        if(a[i]==mex+1){
            if(l==-1)l=i;
            r=i;
        }
    }
    vector<int> freq2 = freq;
    for(int i=l;i<=r;i++){
        if(a[i]<n+1){
            freq2[a[i]]--;
        }
    }
    bool possible=true;
    for(int i=0;i<mex;i++){
        if(freq2[i]==0){
            possible=false;
            break;
        }
    }
    if(possible)cout<<"Yes\n";
    else cout<<"No\n";
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
