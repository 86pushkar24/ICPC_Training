/*
*	Created: 21.09.2026 12:42:48 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
#define int long long
void solve(){
    int a,b,q;
    cin>>a>>b>>q;
    const int inf = (1LL<<60);
    vector<int> shrine;
    vector<int> temple;
    shrine.push_back(-inf); // nothing exists before this
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        shrine.push_back(x);
    }
    shrine.push_back(inf); // nothing exists after this
    temple.push_back(-inf); // nothing exists before this
    for(int i=0;i<b;i++){
        int x;
        cin>>x;
        temple.push_back(x);
    }
    temple.push_back(inf); // nothing exists after this
    while(q--){
        int x;
        cin>>x;
        // first shrine >= x
        int shrineIndex = lower_bound(shrine.begin(),shrine.end(),x) - shrine.begin();
        // first temple >= x
        int templeIndex = lower_bound(temple.begin(),temple.end(),x) - temple.begin();
        // only nearest left and right shrine and temple matter
        int shrines[2] = {shrine[shrineIndex-1],shrine[shrineIndex]};
        int temples[2] = {temple[templeIndex-1],temple[templeIndex]};
        int ans = inf;
        // try all 4 combinations of shrine and temple
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                int shrineDist = abs(shrines[i]-x);
                int templeDist = abs(temples[j]-x);
                // go to shrine first then temple
                ans = min(ans,shrineDist + abs(shrines[i]-temples[j]));
                // go to temple first then shrine
                ans = min(ans,templeDist + abs(temples[j]-shrines[i]));
            }
        }
        cout<<ans<<"\n";
    }
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
