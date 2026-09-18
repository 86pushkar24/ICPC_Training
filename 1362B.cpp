/*
*	Created: 16.09.2026 12:23:23 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    vector<bool> present(1024,false);
    for(int i=0;i<n;i++){
        cin>>a[i];
        present[a[i]]=true;
    }

    int ans=-1;
    for(int k=1;k<1024;k++){
        bool works = true;
        for(int s : a){
            int transformed = s^k;
            if(!present[transformed] || transformed>=1024){
                works=false;
                break;
            }
        }
        if(works){
            ans=k;
            break;
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
